#include<iostream.h>

class rectangle 
{
    private:
    int length;
    int breadth;

    public:
    rectangle(int l=0,int b=0)
    {
        length=l;
        breadth=b;
    }

    void setlen(int l)
    {
        length=l;
    }

    void setbred(int b)
    {
        breadth=b;
    }

    int getl()
    {
        return length;
    }

    int getb()
    {
        return breadth;
    }

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return length+breadth;
    }

};

class cuboid :public rectangle
{
private:
int height;

public:
cuboid(int h)
{
    height=h;
}

void seth(int h)
{
    height=h;
}

int volume()
{
    return area()*height;
}

};
int main()
{
    rectangle r(3,5);
    cuboid c(5);
    c.setlen(5);
    c.setbred(5);
    cout<<"area="<<r.area()<<endl;
    cout<<"vol="<<c.volume();

    return 0;
}