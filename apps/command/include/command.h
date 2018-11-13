#ifndef GOF_PATTERN_COMMAND_H
#define GOF_PATTERN_COMMAND_H
#include <memory>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS Command {
public:
    typedef std::shared_ptr<Command> Ptr;
    virtual ~Command();
    virtual void execute() = 0;
protected:
    Command();
private:

};
}
#endif //GOF_PATTERN_COMMAND_H