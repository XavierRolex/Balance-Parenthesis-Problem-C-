#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>
using namespace std;

#pragma once

const int MAX_ITEMS = 10;

class FullStack
{
}; // exception class thrown by push when the stack is full
class EmptyStack
{
}; // exception class thrown by pop when the stack is empty

template <class T>
class Stack
{
public:
    Stack();
    ~Stack();
    bool IsFull();
    bool IsEmpty();
    void MakeEmpty();
    void Push(T);
    void Pop();
    T Top();
    bool isValid(string);

private:
    int top;
    T items[MAX_ITEMS];
};

#endif