#include<iostream.h>

class stack
{
private:
    int *stk;
    int top;
    int size;
public:
    stack(int s)
    {
        size=s;
        top=-1;
        stk=new int[size];
    }
    void push(int x);
    int pop();
};

void stack::push(int x)
{
    if(top==size-1)
    {
        cout<<"Stack is Full";
    }
    else
    {
        top++;
        stk[top]=x;
    }
}

int stack::pop()
{   int x;
    if(top==-1)
    cout<<"Stack is Empty";
    else
    {
        x=stk[top];
        top--;
    }
    return x;
}

int main()
{
    stack s(3);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    return 0;
}