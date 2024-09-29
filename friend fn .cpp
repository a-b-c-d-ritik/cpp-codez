#include<iostream.h>

class two;
class one
{
private:
int x;
protected:
int y;
public:
int z;

friend two;
};

class two
{
    public:
    one temp;
    void fn() {
    temp.x=15;
    temp.y=36;
    temp.z=55;
    }
};

int main()
{

    return 0;
}