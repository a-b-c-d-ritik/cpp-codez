#include<iostream.h>
class parent 
{
    public:
    void display()
    {
    cout<<"hello data";
    }
};

class child: public parent
{
    public:
    void display(int d)
    {
    cout<<"hello "<<d;
    }


};
int main()
{ 
/*parent *p;
p->display();*/
child x;
x.display(4);// child's display fn
x.parent::display();

    return 0;
}