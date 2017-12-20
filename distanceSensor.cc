#include "distanceSensor.h"
#include "info.h"
#include <iostream>
#include <time.h>
#include "wiringPi.h"

DistanceSensor::DistanceSensor() : Sensor{}, distance{100}, interval{1000} {}

DistanceSensor::~DistanceSensor() {}

SensorInfo DistanceSensor::getInfo() {
    return SensorInfo{distance};
}

void DistanceSensor::start() {
    while (1) {
        delay(this->interval);
        this->distance = simulateDistance();
        notifyObservers();
    }
}

void DistanceSensor::setInterval(const double &inv) {
    if (inv >= 0) this->interval = inv;
}

double DistanceSensor::simulateDistance() {
    return distance - 10 >= 0 ? distance - 10 : 0;
}

double DistanceSensor::detectDistance() {
    return 0;
}
