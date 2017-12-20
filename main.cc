#include "distanceSensor.h"
#include "buzzer.h"
#include "light.h"
#include "controller.h"
#include "gpio_interface.h"

int main(int argc, char const *argv[]) {
    init();
    Controller c{};
    DistanceSensor ds{};
    Buzzer b{};
    Light l{};
    c.addSensor(&ds);
    c.addMonitor(&b);
    c.addMonitor(&l);
    c.init();
    ds.start();
    close();
    return 0;
}
