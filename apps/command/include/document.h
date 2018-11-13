#ifndef GOF_PATTERN_DOCUMENT_H
#define GOF_PATTERN_DOCUMENT_H
#include <memory>
#include <string>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS Document {
public:
    typedef std::shared_ptr<Document> Ptr;
    Document(const std::string& doc_name);
    ~Document();
    void open();
    void paste();
private:
    std::string _doc_name;
};
}
#endif //GOF_PATTERN_DOCUMENT_H