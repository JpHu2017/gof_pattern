#include <stack>
#include "calculator.h"
#include "add_expression.h"
#include "sub_expression.h"
#include "var_expression.h"
namespace gof {
Calculator::Calculator(const std::string& exp_str) {
    createTree(exp_str);
}
Calculator::~Calculator() {
    _expression_ptr = NULL;
}
int Calculator::run(const std::map<std::string, int>& var) {
    return (_expression_ptr==NULL) ? 0: _expression_ptr->interpreter(var);
}
void Calculator::createTree(const std::string& exp_str) {
    _expression_ptr = NULL;
    std::stack<Expression::Ptr> exp_stack;
    Expression::Ptr left  = NULL;
    Expression::Ptr right = NULL;
    for(unsigned int i = 0; i< exp_str.length(); i++) {
        switch(exp_str[i]) {
        case '+':
            left = exp_stack.top();
            exp_stack.pop();
            right.reset(new VarExpression(exp_str.substr(++i,1)));
            exp_stack.push(Expression::Ptr(new AddExpression(left, right)));
            break;
        case '-':
            left = exp_stack.top();
            exp_stack.pop();
            right.reset(new VarExpression(exp_str.substr(++i,1)));
			exp_stack.push(Expression::Ptr(new SubExpression(left, right)));
            break;
        default:
            exp_stack.push(Expression::Ptr(new VarExpression(exp_str.substr(i,1))));
        }
    }
    if(!exp_stack.empty()) {
        _expression_ptr = exp_stack.top();
        exp_stack.pop();
    }
}
}