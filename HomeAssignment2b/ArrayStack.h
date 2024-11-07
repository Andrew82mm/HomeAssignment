#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <stdexcept>

class ArrayStack {
private:
    int top;         
    int capacity;    
    double* stack;

public:
    ArrayStack(int size);
    ~ArrayStack();

    void push(double value);
    double pop();
    int size() const;
    double peek() const;
};

#endif 
