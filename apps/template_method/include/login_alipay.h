#ifndef GOF_PATTERN_LOGIN_ALIPAY_H
#define GOF_PATTERN_LOGIN_ALIPAY_H
#include <memory>
#include "login_system.h"
namespace gof {
class LoginAlipay : public LoginSystem {
public:
    typedef std::shared_ptr<LoginAlipay> Ptr;
    LoginAlipay();
    virtual ~LoginAlipay();
protected:
    virtual void inputAddress();
    virtual void loginMethod();
private:
};
}
#endif //GOF_PATTERN_LOGIN_ALIPAY_H