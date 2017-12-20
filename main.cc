#include "distanceSensor.h"
#include "buzzer.h"
#include "controller.h"
#include "light.h"
#include <iostream>

int main(int argc, char const *argv[]) {
    Controller c{};
    DistanceSensor ds{};
    Buzzer b{};
    Light l{};
    c.addSensor(&ds);
    c.addMonitor(&b);
    c.addMonitor(&l);
    c.init();
    ds.start();
    return 0;
}
