#ifndef GOF_PATTERN_TEXT_DOCUMENT_H
#define GOF_PATTERN_TEXT_DOCUMENT_H
#include <memory>
#include "cz_def.h"
#include "graphic.h"
namespace gof {
class CZ_EXPORTS TextDocument {
public:
    typedef std::shared_ptr<TextDocument> Ptr;
    TextDocument();
    ~TextDocument();
    void instert(const Graphic::Ptr& graphic_ptr);
    void draw();
private:
    Graphic::Ptr _graphic_ptr;
};
}
#endif 