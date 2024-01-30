#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter 3 no's:";
    cout<<"\nn1=";
    cin>>n1;
    cout<<"\nn2=";
    cin>>n2;
    cout<<"\nn3=";
    cin>>n3;

    if(n1>n2 && n1>n3)
    cout<<"\nmax is n1:"<<n1;
    else
    {
        if(n2>n3)
        cout<<"\nmax is n2:"<<n2;
        else
        cout<<"\nmax is n3:"<<n3;
    }
    return 0;
}