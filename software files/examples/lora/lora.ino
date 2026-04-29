#include <Arduino.h>

#define LORARESET 8
#define LED_PIN   7
#define BUTTON_PIN 6

volatile uint8_t ok_bit = 0, join_bit = 0, sent_bit = 0, RECV = 0, BUTON1 = 0;
char CDEVEUI[] = "AT+CDEVEUI=70B3D57ED0068400\r\n";
char CAPPEUI[] = "AT+CAPPEUI=D896E0E000005204\r\n";
char CAPPKEY[] = "AT+CAPPKEY=95938CCB69D0D17FDD7BA2FFE0FB8452\r\n";
char CCLASS[] = "AT+CCLASS=2\r\n";
char CJOIN[] = "AT+CJOIN=1,0,8,8\r\n";
char DTRX[] = "AT+DTRX=1,2,3,112233\r\n";
char DTRXB[] = "AT+DTRX=1,2,1,EE\r\n";

uint8_t receive_array[128], receive_data[128];
uint8_t bitcounter = 0;

void UART0_IRQHandler() {
    while (Serial.available()) {
        char receive_byte = Serial.read();
        if (receive_byte == '\n' && receive_array[bitcounter - 1] == '\r') {
            if (strstr((const char*)receive_array, "OK")) ok_bit = 1;
            if (strstr((const char*)receive_array, "+CJOIN:OK")) join_bit = 1;
            if (strstr((const char*)receive_array, "+CJOIN:FAIL")) join_bit = 2;
            if (strstr((const char*)receive_array, "OK+SENT:01")) sent_bit = 1;
            if (strstr((const char*)receive_array, "OK+RECV:00,02")) {
                RECV = 1;
                memcpy(receive_data, receive_array, 128);
            }
            memset(receive_array, 0, 128);
            bitcounter = 0;
        } else {
            receive_array[bitcounter++] = receive_byte;
        }
    }
}

void setup() {
    Serial.begin(9600);
    pinMode(LORARESET, OUTPUT);
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUTTON_PIN, INPUT_PULLUP);
    
    attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), [] { BUTON1 = 1; }, FALLING);
    
    digitalWrite(LORARESET, LOW);
    delay(100);
    digitalWrite(LORARESET, HIGH);
    delay(100);

    LORA_init();
}

void LORA_init() {
    Serial.print(CDEVEUI);
    while (!ok_bit);
    ok_bit = 0;

    Serial.print(CAPPEUI);
    while (!ok_bit);
    ok_bit = 0;

    Serial.print(CAPPKEY);
    while (!ok_bit);
    ok_bit = 0;

    Serial.print(CCLASS);
    while (!ok_bit);
    ok_bit = 0;

    Serial.print(CJOIN);
    while (join_bit == 0 || join_bit == 2) {
        if (join_bit == 2) {
            join_bit = 0;
            Serial.print(CJOIN);
        }
    }
    join_bit = 0;

    delay(1000);
    Serial.print(DTRX);
    while (!sent_bit);
    sent_bit = 0;
    ok_bit = 0;
    RECV = 0;
}

void loop() {
    if (RECV) {
        if (receive_data[17] == '1' && receive_data[18] == '1') {
            digitalWrite(LED_PIN, HIGH);
        }
        if (receive_data[17] == '2' && receive_data[18] == '2') {
            digitalWrite(LED_PIN, LOW);
        }
        RECV = 0;
    } else if (BUTON1) {
        BUTON1 = 0;
        Serial.print(DTRXB);
        while (!sent_bit);
        sent_bit = 0;
        ok_bit = 0;
        RECV = 0;
    }
}
