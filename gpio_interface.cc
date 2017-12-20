#include <time.h>
#include "wiringPi.h"
#include "gpio_interface.h"

#define BUZZER 5
#define LED_SUCCESS 19
#define DISTANCE_TRIG 16;
#define DISTANCE_ECHO 20;


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

double distance() {
    clock_t start,end,dur;
    double mseconds = 0;

    digitalWrite(TRIG, HIGH);
    delay(0.00001);
    digitalWrite(TRIG, LOW);
    while (!digitalRead(ECHO)) {
        continue;
    }
    start = clock();

    while (digitalRead(ECHO)) {
        continue;
    }
    end = clock();
    dur = end - start;
    double clocks_per_mill = CLOCKS_PER_SEC / 1000;

    mseconds = dur / clocks_per_mill;
    return mseconds * 0.343;
}

void init() {
    wiringPiSetupGpio();
    pinMode(BUZZER, OUTPUT);
    pinMode(LED_SUCCESS, OUTPUT);
    pinMode(DISTANCE_TRIG, OUTPUT);
    pinMode(DISTANCE_ECHO, INPUT);
}
