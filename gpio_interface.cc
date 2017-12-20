#include <time.h>
#include "wiringPi.h"
#include "gpio_interface.h"

#define BUZZER 5
#define LED_SUCCESS 19


void buzz(const bool on) {
    if (on) {
        digitalWrite(BUZZER, HIGH);
    }
    else {
        digitalWrite(BUZZER, LOW);
    }
}

void blink_green(const bool on) {
    if (on) {
        digitalWrite(LED_SUCCESS, HIGH);
    }
    else {
        digitalWrite(LED_SUCCESS, LOW);
    }
}


void init() {
    wiringPiSetupGpio();
    pinMode(BUZZER, OUTPUT);
    pinMode(LED_SUCCESS, OUTPUT);
}
