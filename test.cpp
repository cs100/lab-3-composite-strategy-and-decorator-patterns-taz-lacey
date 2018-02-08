#include <iostream>
#include "component.h"
#include "vector_container.h"
#include "list_container.h"
#include "strategy.h"
#include "decorator.h"

using namespace std;

int main() {
    op* op1 = new op(5);
    op* op2 = new op(2);
    op* op3 = new op(4);
    op* op4 = new op(6);
    op* op5 = new op(5.3);
    op* op6 = new op(6.8);
    multiply* A = new multiply(op1, op2);
    subtract* B = new subtract(op3, op4);
    add* C = new add(A, B);
    square* D = new square(C);
    
    Ceil* E = new Ceil(op5);
    Floor* F = new Floor(op6);
    Abs* G = new Abs(B);
  
   //** test statements
   cout << endl << "Testing" << endl;
   cout << "A is: " << A -> evaluate() << endl;
   cout << "B is: " << B -> evaluate() << endl;
   cout << "C is: " << C -> evaluate() << endl;
   cout << "D is: " << D -> evaluate() << endl;
   cout << "E is: " << E -> evaluate() << endl;
   cout << "F is: " << F -> evaluate() << endl;
   cout << "G is: " << G -> evaluate() << endl;
   cout << "End Testing" << endl << endl;
   


    vector_container* v_container = new vector_container();
    list_container* l_container = new list_container();
    v_container->add_element(A);
    v_container->add_element(B);
    v_container->add_element(C);
    v_container->add_element(D);
    
    cout << "Vector Container Before Sort: " << endl;
    v_container->print();
    
//Bubble Sort
    //v_container->set_sort_function(new BubbleSort());
//selection sort
    v_container->set_sort_function(new SelectionSort());
    
    v_container->sort();
    cout << "Vector Container After Sort: " << endl;
    v_container->print();
    
    
    l_container->add_element(A);
    l_container->add_element(B);
    l_container->add_element(C);
    l_container->add_element(D);
    cout << "List Container Before Sort: " << endl;
    l_container->print();
    
//Bubble Sort
    //l_container->set_sort_function(new BubbleSort());
//Selection Sort
    l_container->set_sort_function(new SelectionSort());
    
    l_container->sort();	
    cout << "List Container After Sort: " << endl;
    l_container->print();
    
};
