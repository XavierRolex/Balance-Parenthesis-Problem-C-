#include "Stack.cpp"

int main()
{
    string s;
    Stack<char> stack;
    cout<<"Enter set of parenthesis: ";
    cin>>s;
    bool valid = stack.isValid(s);
    if (valid)
    {
        cout<<"The set of parentheses are Balanced!";
    }
    else
    {
        cout<<"The set of parentheses are Not Balanced!";
    }
}