#include<iostream>
using namespace std;
int main()
{
    int sum=0,a[7]={4,8,6,9,5,2,7};
    for (int &x:a)
    sum+=x;
    cout<<"sum = "<<sum<<endl;
    return 0;
}