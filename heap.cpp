#include<iostream>
using namespace std;
int main()
{
    int *p=new int[5];
    p[0]=1;
    p[1]=2;
    delete []p;
    p=nullptr;
    cout<<p[0]<<endl<<p[1];
    //cout<<*p<<endl;

    return 0;
}