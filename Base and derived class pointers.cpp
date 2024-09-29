#include<iostream.h>

class base
{
    public:
    void fn1()
    {
        cout<<"\n Fn1 of base ";
    }
    void fn2()
    {
        cout<<"\n Fn2 of base";
    }
};

class derived : public base
{
    public:
    void fn3()
    {
        cout<<"\n Fn3 of derived ";
    }
    void fn4()
    {
        cout<<"\n Fn4 of derived";
    }

};

int main()
{
    derived d;
    d.fn1();
    d.fn2();
    d.fn3();
    d.fn4();

    base *p;
    p=&d;
    p->fn1();
    p->fn2();
    //p->fn3();

    base b;
    derived *x;
    x=&b;
    
    return 0;
}