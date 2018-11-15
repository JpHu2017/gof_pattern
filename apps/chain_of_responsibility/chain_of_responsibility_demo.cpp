// Reference : https://www.cnblogs.com/onlycxue/p/3503658.html
#include <glog/logging.h>
#include <iostream>
#include "manager.h"
#include "common_manager.h"
#include "major_domo.h"
#include "general_manager.h"
int main(int argc, char* argv[]) {
    gof::Manager::Ptr general_ptr(new gof::GeneralManager("GM", NULL));
    gof::Manager::Ptr majordomo_ptr(new gof::MajorDomo("MD", general_ptr));
    gof::Manager::Ptr common_ptr(new gof::CommonManager("CM", majordomo_ptr));
    common_ptr->dealWithRequest("Staff d", 400);
    LOG(INFO) << "--------------------------------";
    common_ptr->dealWithRequest("Staff d", 4000);
    LOG(INFO) << "--------------------------------";
    common_ptr->dealWithRequest("Staff d", 10000);
    return 0;
}