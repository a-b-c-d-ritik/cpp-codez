#include<iostream>
using namespace std;
int main()
{
    char operation;
    int n1,n2,res;
    cout<<"enter operation: +\t-\t*\t/\t%\t:";
    cin>>operation;
    cout<<"Enter numbers:";
    cout<<"\nn1=";
    cin>>n1;
    cout<<"\nn2=";
    cin>>n2;

    switch(operation)
    {
        case '+':
        res=n1+n2;
        cout<<"\nsum="<<res;
        break;

        case '-':
        res=n1-n2;
        cout<<"\ndifference="<<res;
        break;

        case '*':
        res=n1*n2;
        cout<<"\nproduct="<<res;
        break;

        case '/':
        res=n1/n2;
        cout<<"\ndivision="<<res;
        break;

        case '%':
        res=n1%n2;
        cout<<"\nmod="<<res;
        break;

        default:
        cout<<"invalid entry";
    }
    return 0;
}