#include<IOSTREAM.H>

class complex
{
public:
int real;
int img;
public:

complex(int x=0,int y=0)
{
    real=x;
    img=y;
}
complex operator+(complex c)
{
    complex temp;
    temp.real=real+c.real;
    temp.img=img+c.img;
    return temp;
}

};
int main()
{
    complex c1(2,3),c2(3,5),c3;
    c3=c1+c2;
    cout<<"sum= "<<c3.real<<" + "<<c3.img<<"i";
    return 0;
}