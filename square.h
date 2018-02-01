#ifndef __SQUARE_H__
#define __SQUARE_H__

#include "Base.h"


class square {
    private:
        Base* expression;

    public:
        /* Constructors */
        Square() {}

        double evaluate();
};

#endif // __SQUARE_H__

