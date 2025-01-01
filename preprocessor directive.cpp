#include<iostream.h>
#define PI 3.145

#ifndef PIsq
    #define PIsq  10
#endif

#define MAX(X) #X
#define GREATER(a,b) (a>b?a:b)
int main()
{
    cout<<PI;
    cout<<MAX(beta);
    cout<<GREATER(10,20);
    return 0;
}