#include <iostream>
#include "document.h"
namespace gof {
Document::Document(const std::string& doc_name) 
    : _doc_name(doc_name) {}
Document::~Document() {}
void Document::open() {
    std::cout << "open the document '" << _doc_name << "'." << std::endl;
}
void Document::paste() {
    std::cout << "paste the document '" << _doc_name << "'." << std::endl;
}
}