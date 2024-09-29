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

friend ostream & operator<<(ostream &out, complex &c);

};

ostream & operator<<(ostream &out, complex &c)
{
    cout<<c.real<<"+ "<<c.img<<"i"<<endl;
    return out;
}

int main()
{
    complex c1(5,10);
    cout<< c1;
    operator<<(cout,c1);
    return 0;
}