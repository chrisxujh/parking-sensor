#include "servo.h"
#include "info.h"
#include "subject.h"
#include "gpio_interface.h"

Servo::Servo() {
    servo_rotate(0);
}

Servo::~Servo() {}

void Servo::notify(Subject<ControllerInfo> &whoFrom) {
    ControllerInfo info = whoFrom.getInfo();
    const int min = 50;
    if (info.distance <= min && info.distance > 0) {
        double deg = ((min - info.distance) / min) * 180;
        servo_rotate(deg);
    }
    else {
        servo_rotate(0);
    }
}
