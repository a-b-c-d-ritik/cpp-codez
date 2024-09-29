#include<iostream>
using namespace std;

class rectangle
{
public:
int l,b;
int area()
{
return l*b;
}

int perimeter();

};

int rectangle::perimeter()
{
return 2*(l+b);
}


int main()
{
    rectangle r1;
    rectangle *p;
    p=new rectangle;
    r1.l=10;
    r1.b=25;
    cout<<r1.area()<<endl;
    p->l=69;
    cout<<p->l<<endl;

    return 0;
}