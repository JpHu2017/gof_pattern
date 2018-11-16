#ifndef GOF_PATTERN_EMPLOYEE_H
#define GOF_PATTERN_EMPLOYEE_H
#include <memory>
#include <string>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS Employee {
public:
	Employee();
    Employee(const std::string name);
    ~Employee();
    void print();
private:
    std::string _name;
};
}
#endif //GOF_PATTERN_EMPLOYEE_H