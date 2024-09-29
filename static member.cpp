#include<iostream.h>

class test
{
private:
int a;
int b;
public:
static int count;
test()
{
    a=55;
    b=56;
    count++;
}
};
int test::count=0;
int main()
{ 
    test t1,t2;
    cout<<t1.count<<endl;
    //cout<<t2.count<<endl;
    //cout<<test::count;
    return 0;
}