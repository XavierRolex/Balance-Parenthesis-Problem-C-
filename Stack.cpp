#include "Stack.h"

template <class T>
Stack<T>::Stack()
{
    top = -1;
}
template <class T>
bool Stack<T>::IsEmpty()
{
    return (top == -1);
}
template <class T>
void Stack<T>::MakeEmpty()
{
    top = -1;
}
template <class T>
bool Stack<T>::IsFull()
{
    return (top == MAX_ITEMS - 1);
}
template <class T>
void Stack<T>::Push(T newItem)
{
    if (IsFull())
        throw FullStack();
    top++;
    items[top] = newItem;
}
template <class T>
void Stack<T>::Pop()
{
    if (IsEmpty())
        throw EmptyStack();
    top--;
}
template <class T>
T Stack<T>::Top()
{
    if (IsEmpty())
        throw EmptyStack();
    return items[top];
}
template <class T>
bool Stack<T>::isValid(string s)
{
    bool valid = true;
    Stack<char> st;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] =='(' || s[i] =='{' || s[i] =='[')
        {
            st.Push(s[i]);
        }
        else if(s[i]==')')
        {
            if(!st.IsEmpty() && st.Top()=='(')
            {
                st.Pop();
            }
            else
            {
                valid = false;
                break;
            }
        }
        else if(s[i]=='}')
        {
            if(!st.IsEmpty() && st.Top()=='{')
            {
                st.Pop();
            }
            else
            {
                valid = false;
                break;
            }
        }
        else if(s[i]==']')
        {
            if(!st.IsEmpty() && st.Top()=='[')
            {
                st.Pop();
            }
            else
            {
                valid = false;
                break;
            }
        }
    }
    if(!st.IsEmpty())
    {
        return false;
    }
    else
    {
        return valid;
    }

}
template <class T>
Stack<T>::~Stack()
{
    MakeEmpty();
}