#include <glog/logging.h>
#include "login_alipay.h"
namespace gof {
LoginAlipay::LoginAlipay() {}
LoginAlipay::~LoginAlipay() {}
void LoginAlipay::inputAddress() {
    LOG(INFO) << "Input https://www.alipay.com";
}
void LoginAlipay::loginMethod() {
    LOG(INFO) << "Phone number: " << " 1326175****";
    LOG(INFO) << "Code: " << "**0219";
}
}