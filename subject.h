#ifndef _SUBJECT_H_
#define _SUBJECT_H_
#include <vector>
#include "observer.h"

template <typename T>
class Subject {
    std::vector<Observer<T>*> observers;

public:
    Subject() {}
    virtual ~Subject() {}

    virtual T getInfo() = 0;
    void attachObserver(Observer<T> *ob) {
        observers.emplace_back(ob);
    }

    void notifyObservers() {
        for (auto &ob : observers) {
            ob->notify(*this);
        }
    }
};

#endif
