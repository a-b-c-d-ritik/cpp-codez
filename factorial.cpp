#include<iostream>
using namespace std;
int main()
{
    int num,i,fact=1;
    cout<<"enter no to print factorial";
    cin>>num;
    for(i=1;i<=num;i++)
    {
    fact*=i;
    }
    cout<<"factorial of "<<num<<"is = "<<fact;

    return 0;
}