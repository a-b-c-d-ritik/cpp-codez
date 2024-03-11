#include<iostream>
using namespace std;

int maxfn(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        return a;
        else
        return c;
    }
    else
    {
        if(b>c)
        return b;
        else
        return c;
    }
}

int main()
{
    int n1,n2,n3,max;
    int maxfn(int,int,int);
    cout<<"n1=";
    cin>>n1;
    cout<<"n2=";
    cin>>n2;
    cout<<"n3=";
    cin>>n3;
    max=maxfn(n1,n2,n3);
    cout<<"max no is "<<max;
    return 0;
}