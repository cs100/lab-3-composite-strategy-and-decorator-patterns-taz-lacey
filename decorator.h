#ifndef __DECORATOR_H__
#define __DECORATOR_H__
#include "component.h"
#include <iostream>
#include <cmath>
using namespace std;

class Decorator : public Base{
    public:
    virtual double evaluate() = 0;
};


class Ceil : public Decorator{
    protected:
        Base* decorated;
        
    public:
    Ceil(Base* decorated){
        this->decorated= decorated;
    }
    
    double evaluate() {
        return ceil(decorated->evaluate());
    }
};


class Floor : public Decorator{
    protected:
        Base* decorated;
    
    public:
    Floor(Base* decorated) {
        this->decorated = decorated;
    }
    double evaluate() {
        return floor(decorated->evaluate());
    }
};

class Abs : public Decorator{
    protected:
        Base* decorated;
    public:
    Abs(Base* decorated) {
        this->decorated = decorated;
    }
    double evaluate() {
        return abs(decorated->evaluate());
    }
};

#endif //__DECORATOR_H__