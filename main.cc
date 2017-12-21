#include "distanceSensor.h"
#include "buzzer.h"
#include "light.h"
#include "servo.h"
#include "controller.h"
#include "gpio_interface.h"

int main(int argc, char const *argv[]) {
    init();
    Controller c{};
    DistanceSensor ds{};
    Buzzer b{};
    Light l{};
    Servo sv{};
    c.addSensor(&ds);
    c.addMonitor(&b);
    c.addMonitor(&l);
    c.addMonitor(&sv);
    c.init();
    ds.start();
    close();
    return 0;
}
