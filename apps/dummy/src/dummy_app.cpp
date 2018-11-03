/* *
 * @Copyright (c) 2018 by JpHu
 * @Date 2018-6-23
 * @Company CuiZhou
 * @Email hujp@cuizhouai.com
 * @Function
 * */
#include <iostream>
#include "dummy_app.h"
namespace dummy {
void DummyApp::print() {
    std::cout << "It's a dummy app. And It includes " << std::endl;
    _dummy.print();
}
}

