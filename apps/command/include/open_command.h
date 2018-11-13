#ifndef GOF_PATTERN_OPEN_COMMAND_H
#define GOF_PATTERN_OPEN_COMMAND_H
#include <memory>
#include "command.h"
#include "document.h"
namespace gof {
class OpenCommand : public Command {
public:
    OpenCommand(const Document::Ptr& doc_ptr);
    virtual ~OpenCommand();
    virtual void execute();
private:
    Document::Ptr _doc_ptr;
};
}
#endif //GOF_PATTERN_OPEN_COMMAND_H