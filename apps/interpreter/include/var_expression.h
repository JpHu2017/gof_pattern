#ifndef GOF_PATTERN_VAR_EXPRESSION_H
#define GOF_PATTERN_VAR_EXPRESSION_H
#include <string>
#include "expression.h"
namespace gof {
class VarExpression : public Expression {
public:
    typedef std::shared_ptr<VarExpression> Ptr;
    VarExpression(const std::string& key);
    virtual ~VarExpression();
    virtual int interpreter(const std::map<std::string, int>& var) const;
private:
    std::string _key;
};
}
#endif //GOF_PATTERN_VAR_EXPRESSION_H