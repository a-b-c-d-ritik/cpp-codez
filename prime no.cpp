#include<iostream>
using namespace std;
int main()
{
    int num,i,ctr=0;
    cout<<"enter no: ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
    if(num%i==0)
    ctr++;
    }
    if(ctr==2)
    cout<<"\nprime number";
    else
    cout<<"\nnot a prime number";

    return 0;
}