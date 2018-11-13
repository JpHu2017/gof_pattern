#include "paste_command.h"
namespace gof {
PasteCommand::PasteCommand(const Document::Ptr doc_ptr) 
    : _doc_ptr(doc_ptr) {}
PasteCommand::~PasteCommand() {}
void PasteCommand::execute() {
    _doc_ptr->paste();
}
}