#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class stack {

    int *arr;
    int size;
    int maxsize;

public:

    void push (int);
    int pop();
    stack();
    stack(int);
    ~stack();

};


void stack::push(int x) {
    if (size == maxsize) {
        cout << "stack is full\n";
        return;
    }
    arr[size] = x;
    size++;
}

int stack::pop() {
    if (size == 0) {
        cout << "There is nothing in the stack\n";
        return -1;
    }
    size--;
    return arr[size];
}

stack::stack() {
    size = 0;
    arr = (int *) malloc( 100 * sizeof(int) );
    maxsize = 100;
    cout << "Default constructor is called" << endl;
}

stack::stack(int maxsize) {
    size = 0;
    arr = (int *) malloc( maxsize * sizeof(int) );
    this->maxsize = maxsize;
    cout << "Parameterized constructor is called" << endl;
}

stack::~stack() {
    free(arr);
    cout << "Memory has been deallocated by the destructor" << endl;
}

int main()
{
    stack s(10);
    stack s1;

    s.push(12);
    s.push(14);
    s.push(7);

    s1.push(50);

    int a;
    a = s.pop();
    cout << a << endl;

    int b;
    cin >> b;
    cout << b << endl;

    return 0;
}
