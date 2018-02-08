#ifndef __DECORATOR_H__
#define __DECORATOR_H__
#include "component.h"
#include <iostream>
#include <cmath>
using namespace std;

class Decorator : public Base{
    public:
        Decorator() { }
};


class Ceil : public Decorator{
    protected:
        Base* value;
    public:
        Ceil(Base* value) {
            this->value = value;
        }
        double evaluate() {
            return ceil(value->evaluate());
        }
};


class Floor : public Decorator{
    protected:
        Base* value;
    
    public:
    Floor(Base* value) {
        this->value = value;
    }
    double evaluate() {
        return floor(value->evaluate());
    }
};

class Abs : public Decorator{
    protected:
        Base* value;
    public:
    Abs(Base* value) {
        this->value = value;
    }
    double evaluate() {
        return abs(value->evaluate());
    }
};



#endif //__DECORATOR_H__