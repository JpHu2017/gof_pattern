#include <glog/logging.h>
#include "text_document.h"
namespace gof {
TextDocument::TextDocument() {}
TextDocument::~TextDocument() {}
void TextDocument::instert(const Graphic::Ptr& graphic_ptr) {
    LOG(INFO) << "In TextDocument 'insert' function: Image object is not defined";
    _graphic_ptr = graphic_ptr;
}
void TextDocument::draw() {
    _graphic_ptr->draw();
	LOG(INFO) << "In TextDocument 'draw' function: Image object is defined.";
}
}