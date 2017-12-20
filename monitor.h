#ifndef _MONITOR_H_
#define _MONITOR_H_

#include "observer.h"

class Monitor : public Observer {
private:
    /* data */

public:
    Monitor();
    virtual ~Monitor();

    virtual void notify(Subject &) = 0;

};

#endif
