#ifndef __ADDITION_H__
#define __ADDITION_H__

#include "Base.h"


class addition {
    private:
        Base* lhs;
        Base* rhs;

    public:
        /* Constructors */
        Addition() {}

        double evaluate();
};

#endif // __ADDITION_H__

