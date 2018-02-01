#ifndef __MULTIPLY_H__
#define __MULTIPLY_H__

#include "Base.h"


class multiply {
    private:
	Base* lhs;
	Base* rhs;

    public:
        /* Constructors */
        Multiply() {}

        double evaluate();
};

#endif // __MULTIPLY_H__
~

