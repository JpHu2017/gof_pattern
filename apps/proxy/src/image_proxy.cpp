#include <glog/logging.h>
#include "image_proxy.h"
namespace gof {
ImageProxy::ImageProxy(const std::string& image_name) 
    : _image_name(image_name) {
    _image_ptr = NULL;    
}
ImageProxy::~ImageProxy() {}
void ImageProxy::draw() {
    if(_image_ptr == NULL) {
        LOG(INFO) << "Delay defining Image object until executing draw function.";
        _image_ptr.reset(new Image(_image_name));
    }
    return _image_ptr->draw();
}
}