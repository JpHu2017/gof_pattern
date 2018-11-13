#include "open_command.h"
namespace gof {
OpenCommand::OpenCommand(const Document::Ptr& doc_ptr) : _doc_ptr(doc_ptr) {}
OpenCommand::~OpenCommand() {}
void OpenCommand::execute() {
    _doc_ptr->open();
}
}