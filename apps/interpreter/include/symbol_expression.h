#ifndef GOF_PATTERN_SYMBOL_EXPRESSION_H
#define GOF_PATTERN_SYMBOL_EXPRESSION_H
#include <memory>
#include "expression.h"
namespace gof {
class SymbolExpression : public Expression {
public:
    typedef std::shared_ptr<SymbolExpression> Ptr;
    SymbolExpression(const Expression::Ptr& left_ptr, const Expression::Ptr& right_ptr);
    virtual ~SymbolExpression();
    Expression::Ptr getLeft() const;
    Expression::Ptr getRight() const;
protected:
    Expression::Ptr _left_ptr;
    Expression::Ptr _right_ptr;
};
}
#endif //GOF_PATTERN_SYMBOL_EXPRESSION_H