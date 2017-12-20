#ifndef _BUZZER_H_
#define _BUZZER_H_

#include "monitor.h"

class Subject;

class Buzzer : public Monitor {
private:
    /* data */

public:
    Buzzer();
    ~Buzzer();

    void notify(Subject &) override;
};

#endif
