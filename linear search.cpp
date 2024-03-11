#include<iostream>
using namespace std;
int main()
{
    int a[10],i,key,n=10;
    cout<<"enter 10 elemnts in array:"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];

    cout<<"\nenter data to find: ";
    cin>>key;

    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
        cout<<"\nElement is found at index no :"<<i;
        return 0;
        }
    }
    cout<<"\n searching was unsuccesful element not found";
    return 0;
}