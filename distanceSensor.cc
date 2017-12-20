#include "distanceSensor.h"
#include "info.h"
#include <iostream>
#include <time.h>

DistanceSensor::DistanceSensor() : distance{100} {}

DistanceSensor::~DistanceSensor() {}

SensorInfo DistanceSensor::getInfo() {
    return SensorInfo{distance};
}

void DistanceSensor::start() {
    clock_t interval = CLOCKS_PER_SEC;
    while (1) {
        if (clock() % interval == 0) {
            this->distance = simulateDistance();
            notifyObservers();
        }
    }
}


double DistanceSensor::simulateDistance() {
    return distance - 10;
}

double DistanceSensor::detectDistance() {
    return 0;
}
