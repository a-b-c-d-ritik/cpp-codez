#include<iostream.h>

class car
{
public:
virtual void start()=0;

void stop()
{
    cout<<"car is stopped"<<endl;
}
};

class thar:public car
{
public:
void start()
{
    cout<<"thar is started"<<endl;
}
void stop()
{
    cout<<"thar is stopped"<<endl;
}
};

class swift:public car
{
public:
void start()
{
    cout<<"swift is started"<<endl;
}
void stop()
{
    cout<<"swift is stopped"<<endl;
}
};



int main()
{
    car *p;
    thar t;
    p= new thar();
    p->start();
    return 0;
}