#include "buzzer.h"
#include <iostream>
#include "info.h"
#include "subject.h"
#include "gpio_interface.h"

Buzzer::Buzzer() : Monitor{}, on{false} {}
Buzzer::~Buzzer() {}

void Buzzer::notify(Subject<ControllerInfo> &whoFrom) {
    ControllerInfo info = whoFrom.getInfo();
    if (info.distance <= 50) {
        this->alarm();
    }
    else {
        this->alarmOff();
    }
}


void Buzzer::alarm() {
    this->on = !(this->on);
    buzz(on);
}

void Buzzer::alarmOff() {
    buzz(off);
}
