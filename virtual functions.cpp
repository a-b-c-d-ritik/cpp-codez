#include<iostream.h>

class base
{
    public:
    virtual void fn1()  // ye call nhi hoga
    {
        cout<<"\n Fn1 of base "<<endl;
    }
    void fn2()
    {
        cout<<"\n Fn2 of base"<<endl;
    }
};

class derived : public base
{
    public:
    void fn1()  // ye call hoga
    {
        cout<<"\n Fn3 of derived "<<endl;
    }
    void fn2()
    {
        cout<<"\n Fn4 of derived"<<endl;
    }

};

int main()
{
    base *p;
    derived d;
    p=&d;
    p->fn1();
    p->fn2();
    //p->fn3();

   
    
    return 0;
}