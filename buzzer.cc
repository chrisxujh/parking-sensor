#include "buzzer.h"
#include <iostream>

Buzzer::Buzzer() {}
Buzzer::~Buzzer() {}

void Buzzer::notify(Subject &whoFrom) {
    std::cout << "Monitor::notify()" << '\n';
}
