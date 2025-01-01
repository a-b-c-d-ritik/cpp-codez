#include<iostream.h>

namespace first
{
void fn()
{
    cout<<"first fn";
}
};

namespace second
{
void fn()
{
    cout<<"second fn";
}
};
int main()
{
    first::fn();
    return 0;
}