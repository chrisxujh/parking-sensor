#include <time.h>
#include "wiringPi.h"
#include "gpio_interface.h"

#define BUZZER 5
#define LED_SUCCESS 19
#define DISTANCE_TRIG 16
#define DISTANCE_ECHO 20


void buzz(const bool on) {
    if (on) digitalWrite(BUZZER, HIGH);
    else digitalWrite(BUZZER, LOW);
}

void blink_green(const bool on) {
    if (on) digitalWrite(LED_SUCCESS, HIGH);
    else digitalWrite(LED_SUCCESS, LOW);
}

double supersonic_distance() {
    clock_t start,end;

    digitalWrite(DISTANCE_TRIG, HIGH);
    delay(0.00001);
    digitalWrite(DISTANCE_TRIG, LOW);

    // Making sure the signal is sent out
    while (!digitalRead(DISTANCE_ECHO)) continue;
    // Mark down the time at which the signal is sent out
    start = clock();
    // Keep listening for echo signal
    while (digitalRead(DISTANCE_ECHO)) continue;
    // Mark down the time when receiving the feedback signal
    end = clock();

    double clocks_per_mill = CLOCKS_PER_SEC / 1000;
    return ((end - start) / clocks_per_mill) * 34.3;
}

void init() {
    wiringPiSetupGpio();
    pinMode(BUZZER, OUTPUT);
    pinMode(LED_SUCCESS, OUTPUT);
    pinMode(DISTANCE_TRIG, OUTPUT);
    pinMode(DISTANCE_ECHO, INPUT);
}

void close() {
    digitalWrite(BUZZER, LOW);
    digitalWrite(LED_SUCCESS, LOW);
    digitalWrite(DISTANCE_TRIG, LOW);
}
