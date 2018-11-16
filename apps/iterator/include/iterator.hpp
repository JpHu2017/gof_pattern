#ifndef GOF_PATTERN_ITERATOR_H
#define GOF_PATTERN_ITERATOR_H
#include <memory>
#include "cz_def.h"
namespace gof {
template <class Item>
class CZ_EXPORTS Iterator {
public:
    typedef std::shared_ptr<Iterator> Ptr;
    virtual ~Iterator();
    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool isDone() const = 0;
    virtual Item currentItem() const = 0;
protected:
    Iterator();
};
template <class Item>
Iterator<Item>::Iterator() {}
template <class Item>
Iterator<Item>::~Iterator() {}
}
#endif //GOF_PATTERN_ITERATOR_H