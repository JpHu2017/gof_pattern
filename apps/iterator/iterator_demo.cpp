// Reference: Gof Pattern Iterator (Page 179)
#include <iostream>
#include "employee.h"
#include "iterator.hpp"
#include "mylist.hpp"
#include "mylist_iterator.hpp"
int main(int argc, char* argv[]) {
    gof::MyList<gof::Employee> employee_list;
    employee_list.push_back(gof::Employee("Anna"));
    employee_list.push_back(gof::Employee("Brown"));
    employee_list.push_back(gof::Employee("Cindy"));
    employee_list.push_back(gof::Employee("David"));
    gof::MyListIterator<gof::Employee> list_iter(&employee_list);
    for (list_iter.first(); !list_iter.isDone(); list_iter.next()) {
		list_iter.currentItem().print();
	}
    return 0;
}