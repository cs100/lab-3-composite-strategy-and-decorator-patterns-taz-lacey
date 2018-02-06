#ifndef __LIST_CONTAINER__
#define __LIST_CONTAINER__
#include <list>
#include "strategy.h"

using namespace std;

class list_container : public Container {
    
    protected:
        Base* value;
        list<Base*> list_values;
    
    public:

        list_container() { }
        
        //insert top pointer of tree into the container
        void add_element(Base* element);
        
        //iterate through the trees and output values
        void print();
        
        //calls on previously set sorting algorithm
        //Throw exception if sort_function is null
        void sort();
        
        /* Essentially Only Functions Needed to Sort */
        
        //switch tree locations
        void swap(int i, int j);
        
        //get top pointer of tree at index i
        Base* at(int i);
        
        //return container size
        int size();
    
};

#endif