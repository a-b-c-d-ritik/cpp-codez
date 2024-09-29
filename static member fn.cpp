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
static int getcount()
{
    //a++;
    return count;
}
};

int main()
{ 
    test t1,t2;
    cout<<t1.count<<endl;
    cout<<t1.getcount();
    //cout<<t2.count<<endl;
    //cout<<test::count;
    return 0;
}