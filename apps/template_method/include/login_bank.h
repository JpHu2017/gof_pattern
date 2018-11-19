#ifndef GOF_PATTERN_LOGIN_BANK_H
#define GOF_PATTERN_LOGIN_BANK_H
#include <memory>
#include "login_system.h"
namespace gof {
class LoginBank : public LoginSystem {
public:
    typedef std::shared_ptr<LoginBank> Ptr;
    LoginBank();
    virtual ~LoginBank();
protected:
    virtual void inputAddress();
    virtual void loginMethod();
private:
};
}
#endif //GOF_PATTERN_LOGIN_BANK_H