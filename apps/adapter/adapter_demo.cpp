#include <iostream>
#include "class_adapter.h"
#include "object_adapter.h"
#include "target.h"

int main(int argc, char* argv[]) {
    // Adapter(class)
    gof::Target::Ptr target_ptr;
    target_ptr.reset(new gof::ClassAdapter());
    target_ptr->request();

    //Adapter(object)
    target_ptr.reset(new gof::ObjectAdapter());
    target_ptr->request();
    return 0;
}