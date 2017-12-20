#include "controller.h"
#include "info.h"
#include "sensor.h"
#include "monitor.h"
#include <iostream>

Controller::Controller() : Observer<SensorInfo>{}, Subject<ControllerInfo>{}, temp{std::make_unique<ControllerTemp>()} {
    temp->distance = 1000;
}

Controller::~Controller() {}

void Controller::addSensor(Sensor *s) {
    s->attachObserver(this);
}

void Controller::addMonitor(Monitor *m) {
    attachObserver(m);
}

void Controller::init() {
    notifyObservers();
}

void Controller::notify(Subject<SensorInfo> &whoFrom) {
    SensorInfo info = whoFrom.getInfo();
    notifyObservers();
    this->temp->distance = info.distance;
    std::cout << "Distance: " << info.distance << '\n';
}

ControllerInfo Controller::getInfo() {
    return ControllerInfo{this->temp->distance};
}
