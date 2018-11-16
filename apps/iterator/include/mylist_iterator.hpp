#ifndef GOF_PATTERN_MYLIST_ITERATOR_H
#define GOF_PATTERN_MYLIST_ITERATOR_H
#include "iterator.hpp"
#include "mylist.hpp"
namespace gof {
template <class Item>
class MyListIterator : public Iterator<Item> {
public:
     MyListIterator(const MyList<Item>* list);
     virtual ~MyListIterator();
     virtual void first();
     virtual void next();
     virtual bool isDone() const;
     virtual Item currentItem() const;
private:
    const MyList<Item>* _list;
    int _current_index;
};
template <class Item>
MyListIterator<Item>::MyListIterator(const MyList<Item>* list) {
    _list = list;
    _current_index = 0;
}
template <class Item>
MyListIterator<Item>::~MyListIterator() {

}
template <class Item>
void MyListIterator<Item>::first() {
    _current_index = 0;
}
template <class Item>
void MyListIterator<Item>::next() {
    ++_current_index;
}
template <class Item>
bool MyListIterator<Item>::isDone() const {
    return _current_index >= _list->size();
}
template <class Item>
Item MyListIterator<Item>::currentItem() const {
    if(isDone()) {
		LOG(FATAL) << "Overflow.";
    } else { /*do something below*/ }
    return _list->get(_current_index);
}
}
#endif //GOF_PATTERN_MYLIST_ITERATOR_H