#ifndef _MONITOR_H_
#define _MONITOR_H_

#include "observer.h"

class Monitor : public Observer {
private:
    /* data */

public:
    Monitor(arguments);
    virtual ~Monitor();
};

#endif
