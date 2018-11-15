#include "add_expression.h"
namespace gof {
AddExpression::AddExpression(const Expression::Ptr& left_ptr, const Expression::Ptr& right_ptr) 
    : SymbolExpression(left_ptr, right_ptr) {}
AddExpression::~AddExpression() {}
int AddExpression::interpreter(const std::map<std::string, int>& var) const {
    return _left_ptr->interpreter(var)+_right_ptr->interpreter(var);
}
}