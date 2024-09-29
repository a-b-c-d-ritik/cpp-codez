#include<iostream.h>
#include<IOMANIP.H>
#include<math.h>
class mrinal
{
private:
int num,rest;
void getnm()
{
    cout<<"num=";
    cin>>num;
}


public:
void event()
{   getnm();
    rest=pow(num,3);
    putnm();
}

private:
void putnm()
{
    cout<<"\ncube of"<<num<<" is="<<rest;
}
};

int main()
{
    mrinal x;
    x.event();
    return 0;
}