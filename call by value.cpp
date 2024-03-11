#include<iostream>
using namespace std;
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<x<<"\n"<<y<<endl;

}

int main()
{
    int a=50,b=87;
    swap(a,b);

return 0;
}