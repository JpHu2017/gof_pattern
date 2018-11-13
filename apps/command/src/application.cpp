#include <iostream>
#include "application.h"
namespace gof {
Application::Application(const std::string& app_name) 
    : _app_name(app_name) {}
Application::~Application() {}
void Application::operate(const Command::Ptr& command_ptr) {
    std::cout << "The application '"<< _app_name << "' "; 
    command_ptr->execute();
}
}