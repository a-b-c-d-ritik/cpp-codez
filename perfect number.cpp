//perfect no=> sum of factors =2*that no

#include<iostream>
using namespace std;
int main()
{
    int num,i,sum=0;
    cout<<"enter no: ";
    cin>>num;
    cout<<"factors of "<<num<<" are:" ;
    for(i=1;i<=num;i++)
    {
    if(num%i==0)
    {
    cout<<i<<"\t";
    sum+=i;
    }
    }
    if(sum==2*num)
    cout<<"\n"<<num<<" is a perfect number";
    else
    cout<<"\n"<<num<<" is not a perfect number";

    return 0;
}