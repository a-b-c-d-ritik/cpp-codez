#include<iostream.h>

void fn()const
{
    x++;
}
int main()
{
    const int x=10;
    //x++;
    const int y=45;
    const int *p;
    p=&y;
    //++*p;
    cout<<*p;

    const int * const t=&y;
    cout<<y;
    //y++;
    cout<<y;

    int const c=&x;
    c=&y;

    fn();
    return 0;
}