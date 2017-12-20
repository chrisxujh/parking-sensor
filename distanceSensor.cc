#include "distanceSensor.h"
#include "info.h"
#include "wiringPi.h"
#include "gpio_interface.h"

DistanceSensor::DistanceSensor() : Sensor{}, distance{100}, interval{1000} {}

DistanceSensor::~DistanceSensor() {}

SensorInfo DistanceSensor::getInfo() {
    return SensorInfo{distance};
}

void DistanceSensor::start() {
    while (1 && this->interval >= 0) {
        delay(this->interval);
        this->distance = supersonic_distance();

        notifyObservers();
        if (this->distance <= 50 && this->interval >= 10) {
            this->setInterval(this->distance * 10);
        }
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
