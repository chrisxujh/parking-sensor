#ifndef _OBSERVER_H_
#define _OBSERVER_H_

class Subject;

class Observer {
private:
    /* data */

public:
    Observer();
    virtual void notify(Subject &) = 0;
    virtual ~Observer();

};

#endif
