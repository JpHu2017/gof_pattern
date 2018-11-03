#ifndef GOF_PATTERN_SINGLETON_H
#define GOF_PATTERN_SINGLETON_H
#include <memory>
#include <string>
#include "cz_def.h"
namespace gof {
class CZ_EXPORTS Singleton {
public:
    typedef std::shared_ptr<Singleton> Ptr;
    ~Singleton();
    static Singleton::Ptr instance();
    const std::string identifyItself() const;
private:
    Singleton();
    static Singleton::Ptr _instance_ptr;
    static int _id;
};
}
#endif