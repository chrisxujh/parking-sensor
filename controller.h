#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_

#include "observer.h"
#include "subject.h"

class Sensor;
class Monitor;

class Controller : public Observer, public Subject {
private:
    /* data */

public:
    Controller();
    ~Controller();

    void addSensor(Sensor *);
    void addMonitor(Monitor *);
    void init();
    void notify(Subject &) override;
    Info getInfo() override;
};

#endif
