#include<iostream.h>

template<class T>
class stack
{
private:
    T *stk;
    int top;
    int size;
public:
    stack(int s)
    {
        size=s;
        top=-1;
        stk=new T[size];
    }
    void push(T x);
    T pop();
};

template<class T>
void stack<T>::push(T x)
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

template<class T>
T stack<T>::pop()
{   T x;
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
    stack<int> s(3);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    return 0;
}