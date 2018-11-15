#include "symbol_expression.h"
namespace gof {
SymbolExpression::SymbolExpression(const Expression::Ptr& left_ptr, const Expression::Ptr& right_ptr) 
    : _left_ptr(left_ptr), _right_ptr(right_ptr){}
SymbolExpression::~SymbolExpression() {}
Expression::Ptr SymbolExpression::getLeft() const {
    return _left_ptr;
}
Expression::Ptr SymbolExpression::getRight() const {
    return _right_ptr;
}
}