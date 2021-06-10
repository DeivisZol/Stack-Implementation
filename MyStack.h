#include <iostream>
#include <string>
#include <stdexcept>

#ifndef _MyStack_H_
#define _MyStack_H_


namespace Stack {
    struct Node {
        int element;
        Node* next;
    };

    class MyStack {
    public:
        MyStack(); // constr
        ~MyStack(); // deconstr
        bool isEmpty();
        std::string toString();
        int pop();
        void push(int elem);
        int size();
    private:
        int objID = 0;
        static int objCounter;
        Node* top;
    };
}

#endif