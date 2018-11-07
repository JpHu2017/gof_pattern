#include <iostream>
#include "window.h"
#include "windowimp.h"
// #include "windowimp/xwindowimp.h"
#include "windowimp/pmwindowimp.h"
int main(int agrc, char* argv[]) {
    gof::WindowImp::Ptr imp_ptr;
    // imp_ptr.reset(new gof::XWindowImp());
    imp_ptr.reset(new gof::PMWindowImp());
    gof::Window::Ptr window_ptr;
    window_ptr.reset(new gof::Window(imp_ptr));
    window_ptr->drawText();
    window_ptr->drawRect();
    return 0;
}