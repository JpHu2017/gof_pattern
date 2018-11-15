#include "sub_expression.h"
namespace gof {
SubExpression::SubExpression(const Expression::Ptr& left_ptr, const Expression::Ptr& right_ptr) 
    : SymbolExpression(left_ptr, right_ptr) {}
SubExpression::~SubExpression() {}
int SubExpression::interpreter(const std::map<std::string, int>& var) const {
    return _left_ptr->interpreter(var)-_right_ptr->interpreter(var);
}
}