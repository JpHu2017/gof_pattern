#ifndef GOF_PATTERN_LIST_H
#define GOF_PATTERN_LIST_H
#include <glog/logging.h>
#include <memory>
#include <vector>
#include "cz_def.h"

#define DEFAULT_LIST_CAPACITY  10
namespace gof {
template <class Item>    
class CZ_EXPORTS MyList {
public:
    typedef std::shared_ptr<MyList> Ptr;
    MyList(const int& capacity = DEFAULT_LIST_CAPACITY);
    ~MyList();
    const int size() const;
    Item& get(int index) const;
    void push_back(const Item& item);
    void clear();
private:
    int _capacity;
    int _size;
    Item* _list_items;
};
template <class Item> 
MyList<Item>::MyList(const int& capacity) {
    _capacity = capacity;
    _list_items = new Item[_capacity];
    clear();
}
template <class Item> 
MyList<Item>::~MyList() {
    delete [] _list_items;
}
template <class Item> 
const int MyList<Item>::size() const {
    return _size;
}
template <class Item> 
Item& MyList<Item>::get(int index) const {
    return _list_items[index];
}
template <class Item> 
void MyList<Item>::push_back(const Item& item) {
    if(_size < _capacity) {
        _list_items[_size] = item;
        ++_size;
    } else {
        LOG(INFO) << "Capacity isn't enough.";
    }
}
template <class Item> 
void MyList<Item>::clear() {
    _size = 0;
}
}
#endif //GOF_PATTERN_LIST_H