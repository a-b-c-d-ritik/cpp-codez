#include<iostream.h>

class complex
{
private:
int real;
int img;

public:

complex(int r=0,int i=0)//parameterised constructor + mutators
{
    real=r;
    img=i;
}

void display()//accsessor
{
    cout<<endl<<real<<" + "<<img<<"i"<<endl;
}

friend complex operator+(complex c1,complex c2);

};

complex operator+(complex c1,complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}


int main()
{
    complex c1(5,10),c2(25,22),c3;
    c3=c1+c2;
    c3.display();

    c3=operator+(c1,c2);
     c3.display();
    return 0;
}