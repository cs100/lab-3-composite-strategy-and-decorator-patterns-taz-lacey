#include <iostream>
#include <vector>
#include <algorithm>
#include "vector_container.h"
using namespace std;

void vector_container::add_element(Base* element) {
    vector_values.push_back(element);
}

void vector_container::print() {
    if (vector_values.size() == 0) {
        cout << "ERROR, SIZE IS ZERO" << endl;
        return;
    }
    
    for (unsigned x = 0; x < vector_values.size(); ++x) {
        cout << vector_values.at(x)->evaluate() << " ";
    }
    cout << endl;
}

void vector_container::sort() {
    if (sort_function == NULL) {
        throw "Sort_Function is NULL!";
    }
    sort_function->sort(this);
}

void vector_container::swap(int i, int j) {
    Base* temp = vector_values.at(i);
    vector_values.at(i) = vector_values.at(j);
    vector_values.at(j) = temp;
}

Base* vector_container::at(int i) {
    return vector_values.at(i);
}

int vector_container::size() {
    return vector_values.size();
}