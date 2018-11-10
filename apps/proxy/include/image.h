#ifndef GOF_PATTERN_IMAGE_H
#define GOF_PATTERN_IMAGE_H
#include <memory>
#include <string>
#include "graphic.h"
namespace gof {
class Image : public Graphic {
public:
    typedef std::shared_ptr<Image> Ptr;
    Image(const std::string& image_name);
    virtual ~Image();
    virtual void draw();
private:
    std::string _image_name;
};
}
#endif 