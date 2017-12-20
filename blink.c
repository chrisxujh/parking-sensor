#include <stdio.h>
#include "wiringPi.h"

#define LED 5

int main(int argc, char const *argv[]) {
    wiringPiSetupGpio();
    pinMode(LED, OUTPUT);

    while (1) {
        digitalWrite(LED, HIGH);
        delay(500);
        digitalWrite(LED, LOW);
        delay(500);
    }
    return 0;
}
