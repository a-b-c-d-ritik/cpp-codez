#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,r1,r2;
    cout<<"enter value of a:";
    cin>>a;
    cout<<"\nenter value of b:";
    cin>>b;
    cout<<"\nenter value of c:";
    cin>>c;
    r1=(-b+sqrt((b*b)-4*a*c))/2*a;
    r2=(-b-sqrt((b*b)-4*a*c))/2*a;
    cout<<"\nroot 1="<<r1;
    cout<<"\nroot 2="<<r2;

    return 0;
}