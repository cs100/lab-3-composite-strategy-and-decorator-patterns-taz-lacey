#ifndef __SUBTRACTION_H__
#define __SUBTRACTION_H__

#include "Base.h"


class subtraction {
    private:
        Base* lhs;
        Base* rhs;

    public:
        /* Constructors */
        Subtraction() {}

        double evaluate();
};

#endif // __SUBTRACTION_H__

