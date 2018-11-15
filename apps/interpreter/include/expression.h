#ifndef GOF_PATTERN_EXPRESSION_H
#define GOF_PATTERN_EXPRESSION_H
#include <map>
#include <memory>
#include <string>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS Expression {
public:
    typedef std::shared_ptr<Expression> Ptr;
    Expression();
    virtual ~Expression();
    virtual int interpreter(const std::map<std::string, int>& var) const = 0;
private:
};
}
#endif //GOF_PATTERN_EXPRESSION_H