#ifndef GOF_PATTERN_ADD_EXPRESSION_H
#define GOF_PATTERN_ADD_EXPRESSION_H
#include <map>
#include <string>
#include "symbol_expression.h"
namespace gof {
class AddExpression : public SymbolExpression {
public:
    typedef std::shared_ptr<AddExpression> Ptr;
    AddExpression(const Expression::Ptr& left_ptr, const Expression::Ptr& right_ptr);
    virtual ~AddExpression();
    virtual int interpreter(const std::map<std::string, int>& var) const;
private:
};
}
#endif //GOF_PATTERN_ADD_EXPRESSION_H