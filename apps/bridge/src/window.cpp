#include "window.h"
namespace gof {
Window::Window(const WindowImp::Ptr imp_ptr) 
    : _imp_ptr(imp_ptr) {}
Window::~Window() {}
void Window::drawText() {
    _imp_ptr->devDrawText();
}
void Window::drawRect() {
    _imp_ptr->devDrawLine();
    _imp_ptr->devDrawLine();
    _imp_ptr->devDrawLine();
    _imp_ptr->devDrawLine();
}
}