#include <glog/logging.h>
#include "login_mail.h"
namespace gof {
LoginMail::LoginMail() {}
LoginMail::~LoginMail() {}
void LoginMail::inputAddress() {
    LOG(INFO) << "Input https://mail.qq.com";
}
void LoginMail::loginMethod() {
    LOG(INFO) << "User name: " << "Fluence";
    LOG(INFO) << "Password: " << "YHL";
}
}