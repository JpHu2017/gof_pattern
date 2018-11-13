#ifndef GOF_PATTERN_PASTE_COMMAND_H
#define GOF_PATTERN_PASTE_COMMAND_H
#include <memory>
#include "command.h"
#include "document.h"
namespace gof {
class PasteCommand : public Command {
public:
    PasteCommand(const Document::Ptr doc_ptr);
    virtual ~PasteCommand();
    virtual void execute(); 
private:
    Document::Ptr _doc_ptr;
};
}
#endif //GOF_PATTERN_PASTE_COMMAND_H