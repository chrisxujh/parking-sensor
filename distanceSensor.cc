#include "distanceSensor.h"
#include "info.h"
#include <iostream>
#include <time.h>
#include "wiringPi.h"

DistanceSensor::DistanceSensor() : distance{100} {}

DistanceSensor::~DistanceSensor() {}

SensorInfo DistanceSensor::getInfo() {
    return SensorInfo{distance};
}

void DistanceSensor::start() {
    while (1) {
        delay(1000);
        this->distance = simulateDistance();
        notifyObservers();
    }
}


double DistanceSensor::simulateDistance() {
    return distance - 10;
}

double DistanceSensor::detectDistance() {
    return 0;
}
