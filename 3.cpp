#include <iostream>
#include <string>
#include "MyStack.h"

using namespace Stack;


int main() {
    MyStack* myStack = new MyStack();
    myStack->push(10);
    myStack->push(76);
    myStack->push(46);
    myStack->push(1);
    std::cout << "This stack has " << myStack->size() << " elements\n" << myStack->toString() << "\n";
    myStack->pop();
    std::cout << "After single pop stack has these remaining elements " << myStack->toString() << "\n";
    delete myStack;

    try {
        MyStack* myStack = new MyStack();
        std::cout << myStack->toString() << std::endl;
        myStack->pop();
        delete myStack;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << '\n';
    }
    return 0;
}