// Reference: Gof Pattern Iterator (Page 179)
#include <iostream>
#include "employee.h"
#include "iterator.hpp"
#include "mylist.hpp"
#include "mylist_iterator.hpp"
void print(gof::Iterator<gof::Employee>& list_iter) {
	for (list_iter.first(); !list_iter.isDone(); list_iter.next()) {
		list_iter.currentItem().print();
	}
}
int main(int argc, char* argv[]) {
    gof::MyList<gof::Employee> employee_list;
    employee_list.push_back(gof::Employee("Anna"));
    employee_list.push_back(gof::Employee("Brown"));
    employee_list.push_back(gof::Employee("Cindy"));
    employee_list.push_back(gof::Employee("David"));
    print(gof::MyListIterator<gof::Employee>(&employee_list));
    return 0;
}