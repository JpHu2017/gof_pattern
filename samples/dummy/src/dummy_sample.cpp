/* *
 * @Copyright (c) 2018 by JpHu
 * @Date 2018-6-23
 * @Company CuiZhou
 * @Email hujp@cuizhouai.com
 * @Function
 * */
#include <iostream>
#include "dummy_sample.h"

namespace dummy {
void DummySample::print() {
    std::cout << "It's a dummy sample. It includes " << std::endl;
    _dummy.print();
}
}
