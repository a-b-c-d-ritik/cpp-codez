#include<iostream>
using namespace std;

int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}

int main()
{
    int n1,n2,res;
    int add(int,int);
    cout<<"n1=";
    cin>>n1;
    cout<<"n2=";
    cin>>n2;
    res=add(n1,n2);
    cout<<"sum of "<<n1<<" and "<<n2<<" is = "<<res;
    return 0;
}