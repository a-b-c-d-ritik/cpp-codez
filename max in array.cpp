#include<iostream>
using namespace std;
int main()
{
    int max=0,a[5]={1,2,3,4,5};
    for (int &x:a)
    {
        if(max<x)
        max=x;
    }
    cout<<"max element is : "<<max<<endl;
    return 0;
}