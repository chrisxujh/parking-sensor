#include "distanceSensor.h"
#include "buzzer.h"
#include "controller.h"

int main(int argc, char const *argv[]) {
    Controller c{};
    DistanceSensor ds{};
    Buzzer b{};
    c.addSensor(&ds);
    c.addMonitor(&b);
    c.init();
    return 0;
}
