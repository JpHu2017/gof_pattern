#ifndef GOF_PATTERN_VISITOR_H
#define GOF_PATTERN_VISITOR_H
#include <memory>
#include <string>
#include "cz_def.h"
namespace gof {
class Cpu;
class Gpu;
class MainBoard;

class CZ_EXPORTS Visitor {
public:
    typedef std::shared_ptr<Visitor> Ptr;
    Visitor(const std::string& visitor_name);
    virtual ~Visitor();
    virtual void visitCpu(const std::shared_ptr<Cpu>& cpu_ptr) = 0;
    virtual void visitGpu(const std::shared_ptr<Gpu>& gpu_ptr) = 0;
    virtual void visitMainBoard(const std::shared_ptr<MainBoard>& mainboard_ptr) = 0;
protected:
    std::string _visitor_name;
};
}
#endif //GOF_PATTERN_VISITOR_H