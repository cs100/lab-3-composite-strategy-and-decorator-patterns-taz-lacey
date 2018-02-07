#include <iostream>
#include "component.h"
#include "vector_container.h"
#include "list_container.h"
#include "strategy.h"

using namespace std;

int main() {
    op* op1 = new op(5);
    op* op2 = new op(2);
    op* op3 = new op(4);
    op* op4 = new op(6);
    multiply* A = new multiply(op1, op2);
    subtract* B = new subtract(op3, op4);
    add* C = new add(A, B);
    square* D = new square(C);

    vector_container* container = new vector_container();
    //list_container* container = new list_container();
    container->add_element(A);
    container->add_element(B);
    container->add_element(D);
    cout << "Container Before Sort: " << endl;
    container->print();
    container->set_sort_function(new BubbleSort());
    container->sort();	
    cout << "Container After Sort: " << endl;
    container->print();
};
