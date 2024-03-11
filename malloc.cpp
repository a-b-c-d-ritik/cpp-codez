#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *p;
    p=(int*)malloc(5*sizeof(int));
    p[0]=1;
    p[1]=2;
    p[3]=14;
    p[4]=18;
    cout<<p<<endl;
    for(int i=0;i<5;i++)
    cout<<p[i]<<endl;
    free(p);
    return 0;
}