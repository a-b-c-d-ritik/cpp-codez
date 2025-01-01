#include<iostream.h>
//string c="klj";
float c=9.09f;
class base
{   public:
    base()
    {
        cout<<"base constructor"<<endl;
    }

    virtual~base()
    {
        cout<<"base destructor"<<endl;
    }

};

class derived:public base
{ 
    public:
    derived()
    {
        cout<<"derived constructor"<<endl;
    }

    ~derived()
    {
        cout<<"derived destructor"<<endl;
    }

};

int main()
{
    base b;
    derived d;

    base *t=new derived();
    delete t;
    return 0;
}