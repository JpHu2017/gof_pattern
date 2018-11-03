#include <glog/logging.h>
#include <iostream>
#include "singleton.h"
int main(int argc, char* argv[]) {
	// Singleton
    gof::Singleton::Ptr singleton_ptr = gof::Singleton::instance();
    LOG(INFO) << singleton_ptr->identifyItself();
	// I want a more singleton(may in other functions or classes)
	gof::Singleton::Ptr singleton_ptr1 = gof::Singleton::instance();
	// in two times, id is same.
	LOG(INFO) << singleton_ptr1->identifyItself();
    return 0;
}