#ifndef __OP_H__
#define __OP_H__

#include "Base.h"


class op {
    private:
        double value;

    public:
        /* Constructors */
        op() {}

        double evaluate();
};

#endif // __OP_H__

