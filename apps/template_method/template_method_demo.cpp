// Reference: https://blog.csdn.net/nishisiyuetian/article/details/82753689
#include <glog/logging.h>
#include <iostream>
#include "login_system.h"
#include "login_alipay.h"
#include "login_bank.h"
#include "login_mail.h"
int main(int argc, char const *argv[])
{
    gof::LoginSystem::Ptr login_system_ptr;
    login_system_ptr.reset(new gof::LoginAlipay());
    LOG(INFO) << "------------------ login alipay ------------------";
    login_system_ptr->loginIn();
    login_system_ptr.reset(new gof::LoginBank());
    LOG(INFO) << "------------------ login bank ------------------";
    login_system_ptr->loginIn();
    login_system_ptr.reset(new gof::LoginMail());
    LOG(INFO) << "------------------ login mail ------------------";
    login_system_ptr->loginIn();
    return 0;
}
