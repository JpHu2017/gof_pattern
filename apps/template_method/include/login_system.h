#ifndef GOF_PATTERN_LOGIN_SYSTEM_H
#define GOF_PATTERN_LOGIN_SYSTEM_H
#include <memory>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS LoginSystem {
public:
    typedef std::shared_ptr<LoginSystem> Ptr;
    LoginSystem();
    virtual ~LoginSystem();
    void loginIn();
protected:
    virtual void inputAddress() = 0;
    virtual void loginMethod() = 0;
private:
    void connect();
    void openBrowser();
    void closeBrowser();
};
}
#endif //GOF_PATTERN_LOGIN_SYSTEM_H