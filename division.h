#ifndef __DIVISION_H__
#define __DIVISION_H__

#include "Base.h"


class division {
    private:
        Base* lhs;
        Base* rhs;

    public:
        /* Constructors */
        Division() {}

        double evaluate();
};

#endif // __DIVISION_H__

