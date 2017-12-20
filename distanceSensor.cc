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
            simulate();
            notifyObservers();
        }
    }
}


void DistanceSensor::simulate() {
    distance -= 10;
}
