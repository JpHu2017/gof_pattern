#include <glog/logging.h>
#include "login_bank.h"
namespace gof {
LoginBank::LoginBank() {}
LoginBank::~LoginBank() {}
void LoginBank::inputAddress() {
    LOG(INFO) << "Input http://www.****.com/cn/index.html";
}
void LoginBank::loginMethod() {
    LOG(INFO) << "Get fingerprint from local";
}
}