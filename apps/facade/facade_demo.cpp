#include <iostream>
#include "integrator_facade.h"
int main(int argc, char const *argv[])
{
    gof::IntegratorFacade::Ptr integrator_ptr;
    integrator_ptr.reset(new gof::IntegratorFacade());
    integrator_ptr->sellComputer();
    return 0;
}
