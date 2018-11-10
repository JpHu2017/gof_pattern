#include <glog/logging.h>
#include <iostream>
#include "text_document.h"
#include "image_proxy.h"
int main(int argc, char const *argv[])
{
    gof::TextDocument::Ptr text_document_ptr;
    text_document_ptr.reset(new gof::TextDocument());
    gof::Graphic::Ptr graphic_ptr(new gof::ImageProxy("C:/1.png"));
    text_document_ptr->instert(graphic_ptr);
    text_document_ptr->draw();
    return 0;
}
