#include <glog/logging.h>
#include <iostream>
#include <vector>
// #include "computer_prototype.h"
#include "computer/acer_prototype.h"
#include "computer/dell_prototype.h"
int main(int argc, char* argv[]) {
    gof::ComputerPrototype::Ptr computer_ptr;
    computer_ptr.reset(new gof::AcerPrototype());
    // computer_ptr.reset(new gof::DellPrototype());
    LOG(INFO) << "Prototype: " << computer_ptr->indetifyItself();
    //office : place 10 computers in office
    std::vector<gof::ComputerPrototype::Ptr> computer_ptrs;
    int nums = 10;
    for(int i=0; i<nums; ++i) {
        gof::ComputerPrototype::Ptr temp_ptr = computer_ptr->clone();
        // with function "indetifyItself" to verify that there are no releations among computers_ptrs;
        temp_ptr->setComputerId(i);
        computer_ptrs.emplace_back(temp_ptr);

    }
    for(int i=0; i<computer_ptrs.size(); ++i) {
        LOG(INFO) << computer_ptrs.at(i)->indetifyItself();
    }
    return 0;
}