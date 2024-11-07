#include "ArrayStack.h"

ArrayStack::ArrayStack(int size) : top(-1), capacity(size) {
    stack = new double[capacity];
}

ArrayStack::~ArrayStack() {
    delete[] stack;
}

void ArrayStack::push(double value) {
    if (top >= capacity - 1) {
        throw std::overflow_error("Stack overflow");
    }
    stack[++top] = value;
}

double ArrayStack::pop() {
    if (top < 0) {
        throw std::underflow_error("Stack underflow");
    }
    return stack[top--];
}

int ArrayStack::size() const {
    return top + 1;
}

double ArrayStack::peek() const {
    if (top < 0) {
        throw std::underflow_error("Stack underflow");
    }
    return stack[top];
}
