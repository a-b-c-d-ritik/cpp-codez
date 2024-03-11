#include<iostream>
using namespace std;

struct rectangle
{
    int l,b;
};

void initialize(struct rectangle *r,int l,int b)
{
    r->l=l;
    r->b=b;
    cout<<"length="<<r->l<<endl;
    cout<<"breadth="<<r->b<<endl;
}

int area(struct rectangle r)
{
    return (r.l*r.b);
}

int perimeter(struct rectangle r)
{
    return(2*(r.l+r.b));
}


int main()
{
    struct rectangle r;
    initialize(&r,10,20);
    cout<<"area ="<<area(r)<<endl;
    cout<<"perimeter ="<<perimeter(r)<<endl;
    return 0;

}