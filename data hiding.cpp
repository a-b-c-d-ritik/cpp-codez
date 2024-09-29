#include<iostream>
using namespace std;

class rectangle
{
private:
int l,b;

public:
int area()
{
return l*b;
}

rectangle()
{
    l=b=0;
}

rectangle(int ll,int bb)
{
    setLength(ll);
    setBreadth(bb);

}

rectangle(rectangle &r)
{
    l=r.l;
    b=r.b;
}

int perimeter()
{
return 2*(l+b);
}

void setLength(int len)
{   if(len>0)
    l=len;
    else
    l=-len;
}


void setBreadth(int bred)
{   if(bred>0)
    b=bred;
    else
    b=-bred;
}

int getlen()
{
    return l;
}

int getbred()
{
    return b;
}

};


int main()
{
    rectangle r1;
    rectangle r2(10,88);
    rectangle r3;
    //rectangle *p;
    //p=new rectangle;
    /*r1.setLength(10);
    r1.setBreadth(-25);*/
    cout<<r1.area()<<endl;
   
    cout<<r1.getlen()<<endl;
    cout<<r1.getbred()<<endl;

    cout<<sizeof(r1)<<endl;

     cout<<r2.area()<<endl;
   
    cout<<r2.getlen()<<endl;
    cout<<r2.getbred()<<endl;

     cout<<r3.area()<<endl;
   
    cout<<r3.getlen()<<endl;
    cout<<r3.getbred()<<endl;
    return 0;
}