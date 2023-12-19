//
// Created by pmanu on 19/12/2023.
//

#ifndef POOPROJETO_MYPOINTER_H
#define POOPROJETO_MYPOINTER_H
// para testar apenas
#include <iostream>
using namespace std;

// A generic smart pointer class
template <class T> class MyPointer {
    T* ptr; // Actual pointer
public:
    // Constructor
    explicit MyPointer(T* p = NULL) { ptr = p; }

    // Destructor
    ~MyPointer() { delete (ptr); }

    // Overloading dereferencing operator
    T& operator*() { return *ptr; }

    // Overloading arrow operator so that
    // members of T can be accessed
    // like a pointer (useful if T represents
    // a class or struct or union type)
    T* operator->() { return ptr; }
};


#endif //POOPROJETO_MYPOINTER_H
