#include "buzzer.h"
#include <iostream>
#include "info.h"
#include "subject.h"

Buzzer::Buzzer() {}
Buzzer::~Buzzer() {}

void Buzzer::notify(Subject<ControllerInfo> &whoFrom) {
    ControllerInfo info = whoFrom.getInfo();
    if (info.distance <= 50) {
        std::cout << "/* BUZZ */" << '\n';
    }
}
