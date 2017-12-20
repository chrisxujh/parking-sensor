#include <stdio.h>
#include <time.h>
#include "wiringPi.h"

#define TRIG 12
#define ECHO 19

int main(int argc, char const *argv[]) {
    wiringPiSetupGpio();
    pinMode(TRIG, OUTPUT);
    pinMode(ECHO, INPUT);

    delay(100);
    printf("Measurement in progress...\n");
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
    double distance = mseconds * 0.343;
    printf("Distance: %fm\n", distance);

    return 0;
}
