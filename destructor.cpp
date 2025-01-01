#include<iostream.h>

class test
{
    public:
    test()
    {
        cout<<"constructor";
    }

    ~test()
    {
        cout<<"destructor";
    }
};

void fn()
{
    test t;
}

int main()
{
    //test *t=new test();
    fn();

    return 0;
}