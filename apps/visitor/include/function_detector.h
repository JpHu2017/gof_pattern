#ifndef GOF_PATTERN_FUNCTION_DETECTOR_H
#define GOF_PATTERN_FUNCTION_DETECTOR_H
#include "visitor.h"
namespace gof {
class FunctionDetector : public Visitor {
public:
    typedef std::shared_ptr<FunctionDetector> Ptr;
    FunctionDetector(const std::string& visitor_name);
    virtual ~FunctionDetector();
    virtual void visitCpu(const std::shared_ptr<Cpu>& cpu_ptr);
    virtual void visitGpu(const std::shared_ptr<Gpu>& gpu_ptr);
    virtual void visitMainBoard(const std::shared_ptr<MainBoard>& mainboard_ptr);

private:

};
}
#endif //GOF_PATTERN_FUNCTION_DETECTOR_H