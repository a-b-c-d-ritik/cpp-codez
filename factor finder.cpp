#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"enter no: ";
    cin>>num;
    cout<<"factors of "<<num<<" are:" ;
    for(i=1;i<=num;i++)
    {
    if(num%i==0)
    cout<<i<<"\t";
    }

    return 0;
}