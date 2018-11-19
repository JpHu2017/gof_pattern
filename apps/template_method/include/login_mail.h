#ifndef GOF_PATTERN_LOGIN_MAIL_H
#define GOF_PATTERN_LOGIN_MAIL_H
#include <memory>
#include "login_system.h"
namespace gof {
class LoginMail : public LoginSystem {
public:
    typedef std::shared_ptr<LoginMail> Ptr;
    LoginMail();
    virtual ~LoginMail();
protected:
    virtual void inputAddress();
    virtual void loginMethod();
private:
};
}
#endif //GOF_PATTERN_LOGIN_MAIL_H