#include "MyStack.h"

using namespace Stack;

int MyStack::objCounter = 0;

MyStack::MyStack() {
    objID = objCounter++;
    top = NULL;
}

MyStack::~MyStack() {
    while (!isEmpty()) { // cleans memory
        pop();
    }
}

int MyStack::size() {
    int lenght = 0;
    Node* temporary = top;
    while (temporary != NULL) {
        lenght++;
        temporary = temporary->next;
    }
    return lenght;
}

int MyStack::pop() {
    if (isEmpty()) {
        throw std::logic_error("Can't pop empty Stack");
    }

    int temporary = top->element;
    Node* removedTop = top;
    top = removedTop->next;
    delete removedTop;
    return temporary;
}

void MyStack::push(int elem) {
    Node* temporary = new Node;
    temporary->element = elem;
    temporary->next = top;
    top = temporary;
}

bool MyStack::isEmpty() {
    return (top == NULL);
}

std::string MyStack::toString() {
    std::string newString;
    if (isEmpty()) {
        newString = "No elements object id:" + std::to_string(objID);
        return newString;
    }

    Node* temporary = top;
    while (temporary != NULL) {
        newString = newString + std::to_string(temporary->element) + "  ";
        temporary = temporary->next;
    }
    newString = newString + "NULL\n";
    newString += "object id: " + std::to_string(objID);
    return newString;
}