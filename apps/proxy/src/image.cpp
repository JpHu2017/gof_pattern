#include <glog/logging.h>
#include "image.h"
namespace gof {
Image::Image(const std::string& image_name) 
    : _image_name(image_name) {}
Image::~Image() {}
void Image::draw() {
    LOG(INFO) << "Draw a image from " << _image_name;
}
}
