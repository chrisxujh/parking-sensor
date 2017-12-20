#include "light.h"
#include "info.h"
#include "subject.h"
#include "gpio_interface.h"

Light::Light() {}
Light::~Light() {}

void Light::notify(Subject<ControllerInfo> &whoFrom) {
    ControllerInfo info = whoFrom.getInfo();
    if (info.distance >= 50) {
        this->greenInfo();
    }
    else {
        this->off();
    }
}


void Light::off() {
    blink_green(false);
}


void Light::greenInfo() {
    blink_green(true);
}
