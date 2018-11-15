//Reference: https://blog.csdn.net/zang141588761/article/details/53483645
#include <glog/logging.h>
#include <iostream>
#include "calculator.h"
int main(int argc, char* argv[]) {
    std::string exp_str = "a+b-c+d";
    std::map<std::string, int> var;
    var["a"] = 100;
    var["b"] = 20;
    var["c"] = 40;
	var["d"] = 30;
    gof::Calculator::Ptr cal_ptr(new gof::Calculator(exp_str));
    LOG(INFO) << "Result is " << exp_str << " = " << cal_ptr->run(var);
    return 0;
}