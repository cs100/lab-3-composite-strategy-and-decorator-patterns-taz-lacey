#ifndef __VECTOR_CONTAINER__
#define __VECTOR_CONTAINER__
#include <vector>
#include "strategy.h"
using namespace std;

class vector_container : public Container {
    
    protected:
        Base* value;
        vector<Base*> vector_values;
        
    public:
        
        vector_container() { }
        
        //insert the top pointer of tree into container
        void add_element(Base* element);
        
        //iterate through the trees and output values
        void print();
        
        //calls on previously set sorting-algorithm
        //Throw exception if sort_function is null
        void sort();
        
        //switch tree locations
        void swap(int i, int j);
        
        //egt top pointer of tree at index i
        Base* at(int i);
        
        //return container size
        int size();

};

#endif
