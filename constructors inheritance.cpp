#include<iostream.h>

class base
{
 public:
 base()
 {
    cout<<"without param base cons";
 }   
 base(int x)
 {
    cout<<"with param base cons "<<x;
 }
};

class derived: public base
{
public:
derived()
{
    cout<<"\nderived const without param ";

}
derived(int x)
{
    cout<<"\nderived const with param :"<<x;
}

derived(int x,int y):base(x)
{
    cout<<"\nderived const with param :"<<y;
}

};

int main()
{
    derived d;
    derived l(3);

    cout<<"\n\n\n";
    derived k(2,5);

    return 0;
}