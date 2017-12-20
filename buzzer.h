#ifndef _BUZZER_H_
#define _BUZZER_H_

#include "monitor.h"

class ControllerInfo;

template <typename T> class Subject;

class Buzzer : public Monitor {
    bool on;
    void alarm();
    void alarmOff();

public:
    Buzzer();
    ~Buzzer();

    void notify(Subject<ControllerInfo> &) override;
};

#endif
