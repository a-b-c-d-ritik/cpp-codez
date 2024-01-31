#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x;
    float a,b,c,d,r1,r2;
    cout<<"Enter coefficients of quadratic eqn : ax^2+bx+c=0";
    cout<<"\nenter coefficents:";
    cout<<"\na=";
    cin>>a;
    cout<<"\nb=";
    cin>>b;
    cout<<"\nc=";
    cin>>c;

    d=(b*b-4*a*c);
    r1=(-b+pow(d,1/2))/2*a;
    r2=(-b+pow(d,1/2))/2*a;
    if(d==0)
    {
        cout<<"\nroots are real and equal";
        cout<<"\nroot 1=root 2="<<r1;
    }
    else if(d>0)
    {
        cout<<"\nroots are real and distinct";
        cout<<"\nroot 1="<<r1;
        cout<<"\nroot 2="<<r2;
    }
    else if(d<0)
    cout<<"\n roots are imaginary";
    else
    cout<<"\ninvalid coefficients";
    return 0;
}