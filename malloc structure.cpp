#include<iostream>
using namespace std;
struct rectangle
{
    int length,breadth;
};
int main()
{
    struct rectangle *p;
    p=(struct rectangle *)malloc(sizeof(struct rectangle));
    p->breadth=20;
    p->length=10;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    cout<<p<<endl;

    return 0;
}