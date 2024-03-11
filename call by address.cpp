#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
 }

int main()
{
    int a=50,b=87;
    swap(&a,&b);
    cout<<a<<"\n"<<b<<endl;
return 0;
}