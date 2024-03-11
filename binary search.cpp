#include<iostream>
using namespace std;
int main()
{
    int a[10]={6,8,13,17,20,22,25,28,30,35};
    int l=0,h=9,mid,key;
    cout<<"enter key:";
    cin>>key;
    while(l<=h)
    {
        hr:
        mid=(l+h)/2;
        if(key==a[mid])
        {
        cout<<"\nkey found at :"<<mid;
        return 0;
        }
        else if(a[mid]>key)
        {
        h=mid-1;
        goto hr;
        }
        else
        {
        l=mid+1;
        goto hr;
        }
    }
    cout<<"key not found";
    return 0;
}