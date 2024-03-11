#include<iostream>
using namespace std;

int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}

int add(int a,int b,int c)
{
    int sum;
    sum=a+b+c;
    return sum;
}

int main()
{
    int n1,n2,res1,n3,res2;
    
    int add(int,int);
    int add(int,int,int);
    cout<<"n1=";
    cin>>n1;
    cout<<"n2=";
    cin>>n2;
    cout<<"n3=";
    cin>>n3;
    res1=add(n1,n2);
    res2=add(n1,n2,n3);

    cout<<"sum of "<<n1<<" and "<<n2<<" is = "<<res1<<endl;
    cout<<"sum of "<<n1<<","<<n2 <<" and "<<n3<<" is = "<<res2<<endl;
    return 0;
}