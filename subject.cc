#include "subject.h"
#include "observer.h"

Subject::Subject() {}
Subject::~Subject() {}

void Subject::attachObserver(Observer *ob) {
    observers.emplace_back(ob);
}

void Subject::notifyObservers() {
    for (auto &ob : observers) {
        ob->notify(*this);
    }
}
