#include <glog/logging.h>
#include "login_system.h"
namespace gof {
LoginSystem::LoginSystem() {}
LoginSystem::~LoginSystem() {}
void LoginSystem::loginIn() {
    connect();
    openBrowser();
    inputAddress();
    loginMethod();
    closeBrowser();
}
void LoginSystem::connect() {
    LOG(INFO) << "connect network.";
}
void LoginSystem::openBrowser() {
    LOG(INFO) << "open browser.";
}
void LoginSystem::closeBrowser() {
    LOG(INFO) << "close browser.";
}
}