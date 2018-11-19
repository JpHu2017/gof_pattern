//Reference: https://www.cnblogs.com/suzhou/p/designpattern17visitor.html
#include <glog/logging.h>
#include <iostream>
#include "computer.h"
#include "visitor.h"
#include "circuit_detector.h"
#include "function_detector.h"
#include "element.h"
#include "cpu.h"
#include "gpu.h"
#include "mainboard.h"
int main(int argc, char const *argv[])
{
    gof::Element::Ptr cpu_ptr, gpu_ptr, mainboard_ptr;
    cpu_ptr.reset(new gof::Cpu("Intel Cpu"));
    gpu_ptr.reset(new gof::Gpu("Nvidia Gpu"));
    mainboard_ptr.reset(new gof::MainBoard("Huawei Mainboard"));
    gof::Computer::Ptr computer_ptr;
    computer_ptr.reset(new gof::Computer(cpu_ptr, gpu_ptr, mainboard_ptr));
    gof::Visitor::Ptr dan_ptr(new gof::CircuitDetector("Circuit detector Dan"));
    gof::Visitor::Ptr tom_ptr(new gof::FunctionDetector("Fucntion detector Tom"));
    LOG(INFO) << "Step 1 : Dan is checking computer's circuits.";
    computer_ptr->accept(dan_ptr);
    LOG(INFO) << "Step 2 : Tom is checking computer's function.";
    computer_ptr->accept(tom_ptr);
    return 0;
}
