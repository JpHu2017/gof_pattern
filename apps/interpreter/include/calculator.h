#ifndef GOF_PATTERN_CALCULATOR_H
#define GOF_PATTERN_CALCULATOR_H
#include <memory>
#include <string>
#include "cz_def.h"
#include "expression.h"
namespace gof {
class CZ_EXPORTS Calculator {
public:
    typedef std::shared_ptr<Calculator> Ptr;
    Calculator(const std::string& exp_str);
    ~Calculator();
    int run(const std::map<std::string, int>& var);
private:
    // base on expression, create a symbol tree
    void createTree(const std::string& exp_str);
    Expression::Ptr _expression_ptr;
};
}
#endif //GOF_PATTERN_CALCULATOR_H