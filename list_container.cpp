#include <iostream>
#include <algorithm>
#include <list>
#include "list_container.h"


void list_container::add_element(Base* element) {
    list_values.push_back(element);
}

void list_container::print() {
    for (list<Base*>::iterator it = list_values.begin(); it != list_values.end(); ++it) {
        cout << (*it)->evaluate() << " ";
    }
    cout << endl;
}

void list_container::sort() {
    
}

void list_container::swap(int i, int j) {
    list<Base*>::iterator it1 = list_values.begin();
    list<Base*>::iterator it2 = list_values.begin();
    for (int x = 0; x < i; ++x) {
        ++it1;
    }
    for (int y = 0; y < j; ++y) {
        ++it2;
    }
    Base* temp = *it1;
    *it2 = *it1;
    *it1 = temp;
}

Base* list_container::at(int i) {
    list<Base*>::iterator it = list_values.begin();
    for (int x = 0; x < i; ++x) {
        ++it;
    }
    return *it;
}

int list_container::size() {
    return list_values.size();
}