#include "controller.h"
#include "info.h"
#include "sensor.h"
#include "monitor.h"

Controller::Controller() {}
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

void Controller::notify(Subject &whoFrom) {

}

Info Controller::getInfo() {

}
