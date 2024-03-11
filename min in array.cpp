#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int min=a[0];
    for (int &x:a)
    {
        if(min>x)
        min=x;
    }
    cout<<"min element is : "<<min<<endl;
    return 0;
}