#include "buzz.h"
#include "wiringPi.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {
    bool on = true;
    init();
    while (1) {
        delay(100);
        on = !on;
        buzz(on);
        blink_green(on);
        printf("ss\n");

    }
    return 0;
}
