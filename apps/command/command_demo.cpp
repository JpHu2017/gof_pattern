#include <iostream>
#include "application.h"
#include "document.h"
#include "command.h"
// #include "open_command.h"
#include "paste_command.h"
int main(int argc, char* argv[]) {
    gof::Application::Ptr app_ptr;
    app_ptr.reset(new gof::Application("command demo"));
    gof::Document::Ptr doc_ptr;
    gof::Command::Ptr command_ptr;
    /*...You could do many operations here...*/
    doc_ptr.reset(new gof::Document("C:/kenler/Desktop/1.txt"));
    // command_ptr.reset(new gof::OpenCommand(doc_ptr));
    command_ptr.reset(new gof::PasteCommand(doc_ptr));
    app_ptr->operate(command_ptr);
    return 0;
}