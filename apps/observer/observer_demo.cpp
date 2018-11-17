#include <glog/logging.h>
#include <iostream>
#include "subject.h"
#include "concrete_subject.h"
#include "observer.h"
#include "concrete_observera.h"
#include "concrete_observerb.h"
int main(int argc, char* argv[]) {
    gof::Subject::Ptr subject_ptr;
    subject_ptr.reset(new gof::ConcreteSubject());
    gof::Observer::Ptr observer_ptr, observer2_ptr;
	observer_ptr.reset(new gof::ConcreteObserverA(subject_ptr));
	observer2_ptr.reset(new gof::ConcreteObserverB(subject_ptr));
    subject_ptr->setState(2);
    subject_ptr->attach(observer_ptr);
    subject_ptr->attach(observer2_ptr);
    subject_ptr->notify();
    //
    LOG(INFO) << "-----------------------------";
    subject_ptr->detach(observer_ptr);
    subject_ptr->setState(3);
    subject_ptr->notify();
    return 0;
}