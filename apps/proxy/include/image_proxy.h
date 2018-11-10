#ifndef GOF_PATTERN_IMAGE_PROXY_H
#define GOF_PATTERN_IMAGE_PROXY_H
#include <memory>
#include "graphic.h"
#include "image.h"
namespace gof {
class ImageProxy : public Graphic{
public:
    typedef std::shared_ptr<ImageProxy> Ptr;
    ImageProxy(const std::string& image_name);
    virtual ~ImageProxy();
    virtual void draw();
private:
    std::string _image_name;
    Image::Ptr _image_ptr;
};
}
#endif //GOF_PATTERN_IMAGE_PROXY_H