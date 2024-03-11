#include<iostream>
using namespace std;
struct rectangle
{
    int length,breadth;
};
int main()
{
    struct rectangle r={10,20},*p=&r;
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    cout<<p<<endl;

    return 0;
}