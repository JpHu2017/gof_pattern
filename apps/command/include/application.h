#ifndef GOF_PATTERN_APPLICATION_H
#define GOF_PATTERN_APPLICATION_H
#include <memory>
#include <string>
#include "cz_def.h"
#include "command.h"
#include "document.h"
namespace gof {
class CZ_EXPORTS Application {
public:
    typedef std::shared_ptr<Application> Ptr;
    Application(const std::string& app_name);
    ~Application();
    void operate(const Command::Ptr& command_ptr);
private:
    std::string _app_name;
};
}
#endif //GOF_PATTERN_APPLICATION_H