#ifndef GOF_PATTERN_SUB_EXPRESSION_H
#define GOF_PATTERN_SUB_EXPRESSION_H
#include "symbol_expression.h"
namespace gof {
class SubExpression : public SymbolExpression {
public:
    typedef std::shared_ptr<SubExpression> Ptr;
    SubExpression(const Expression::Ptr& left_ptr, const Expression::Ptr& right_ptr);
    virtual ~SubExpression();
    virtual int interpreter(const std::map<std::string, int>& var) const;
private:
};
}
#endif //GOF_PATTERN_SUB_EXPRESSION_H