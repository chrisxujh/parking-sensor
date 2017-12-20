#include "light.h"
#include <iostream>
#include "info.h"
#include "subject.h"

Light::Light() {}
Light::~Light() {}

void Light::notify(Subject<ControllerInfo> &whoFrom) {
    ControllerInfo info = whoFrom.getInfo();
    if (info.distance <= 50) {
        this->alarm();
    }
}


void Light::alarm() {
    std::cout << "/* LIGHT */" << '\n';
}
