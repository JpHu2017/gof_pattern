#include <glog/logging.h>
#include <iostream>
#include "composite_equipment.h"
#include "equipment.h"
#include "leaf_equipment.h"

int main(int argc, char* argv[]) {
    // computer: screen, keymouse, case
    // case: memory, cpu, gpu
    gof::Equipment::Ptr memory_ptr;
    memory_ptr.reset(new gof::LeafEquipment("Memory"));
    // only setPrice in LeafEquipment class could do work 
    memory_ptr->setPrice(10.0);
    gof::Equipment::Ptr cpu_ptr;
    cpu_ptr.reset(new gof::LeafEquipment("Cpu"));
    cpu_ptr->setPrice(20.0);
    gof::Equipment::Ptr gpu_ptr;
    gpu_ptr.reset(new gof::LeafEquipment("Gpu"));
    gpu_ptr->setPrice(30.0);

    // case
    gof::Equipment::Ptr case_ptr;
    case_ptr.reset(new gof::CompositeEquipment("Case"));
    // only composite could execute the function 'add' & 'remove' 
    if(case_ptr->isComposite()) {
        case_ptr->add(memory_ptr);
        case_ptr->add(cpu_ptr);
        case_ptr->add(gpu_ptr);
    }
    // composite equipment can't set price, so the phase below doesn't work
    case_ptr->setPrice(100.0);
    
    gof::Equipment::Ptr screen_ptr;
    screen_ptr.reset(new gof::LeafEquipment("Screen"));
    screen_ptr->setPrice(5.0);
    gof::Equipment::Ptr keymouse_ptr;
    keymouse_ptr.reset(new gof::LeafEquipment("Keymouse"));
    keymouse_ptr->setPrice(3.0);

    gof::Equipment::Ptr computer_ptr;
    computer_ptr.reset(new gof::CompositeEquipment("Computer"));
    if(computer_ptr->isComposite()) {
        computer_ptr->add(case_ptr);
        computer_ptr->add(screen_ptr);
        computer_ptr->add(keymouse_ptr);
    }
    LOG(INFO) << computer_ptr->price();
    return 0;
}