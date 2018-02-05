#ifndef __COMPONENT_H__
#define __COMPONENT_H__

class Base {
    public:
        /* Constructors */
        Base() {}

        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
};

class op : public Base { 
    public:
        double value;

        /* Constructors */
        op(double value) {
            this->value = value;
        }

        double evaluate() {
            return value;
        }
};


class multiply : public Base {
    protected:
    	Base* lhs;
    	Base* rhs;

    public:
        /* Constructors */
        multiply(Base* lhs, Base* rhs) {
            this->lhs = lhs;
            this->rhs = rhs;
        }

        double evaluate() {
            return lhs->evaluate() * rhs->evaluate();
        }
};

class divide : public Base {
    protected:
        Base* lhs;
        Base* rhs;

    public:
        /* Constructors */
        divide(Base* lhs, Base* rhs) {
            this->lhs = lhs;
            this->rhs = rhs;
        }

        double evaluate() {
            return lhs->evaluate() / rhs->evaluate();
        }
};

class add : public Base {
    protected:
        Base* lhs;
        Base* rhs;

    public:
        /* Constructors */
        add(Base* lhs, Base* rhs) {
            this->lhs = lhs;
            this->rhs = rhs;
        }

        double evaluate() {
            return lhs->evaluate() + rhs->evaluate();            
        }
};

class subtract : public Base {
    protected:
        Base* lhs;
        Base* rhs;

    public:
        /* Constructors */
        subtract(Base* lhs, Base* rhs) {
            this->lhs = lhs;
            this->rhs = rhs;
        }

        double evaluate() {
            return lhs->evaluate() - rhs->evaluate();
        }
};

class square : public Base {
    protected:
        Base* expression;

    public:
        /* Constructors */
        square(Base* expression) {
            this->expression = expression;
        }

        double evaluate() {
            return expression->evaluate() * expression->evaluate();
        }
};

#endif // __COMPONENT_H__
