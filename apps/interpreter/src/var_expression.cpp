#include "var_expression.h"
namespace gof {
VarExpression::VarExpression(const std::string& key) : _key(key) {}
VarExpression::~VarExpression() {}
int VarExpression::interpreter(const std::map<std::string, int>& var) const {
    return var.at(_key);
}
}
