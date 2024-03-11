#include<iostream>
//#include<stdio.h>
using namespace std;
struct rectangle {
    int length,breadth;};
struct x
{
int d;
int e;
char k;
};
int main()
{
    struct rectangle a;
    struct x g;
    a.length=5;
    a.breadth=10;
    cout<<"Area is = "<<a.length*a.breadth<<endl;
    cout<<sizeof(g);
    return 0;
}