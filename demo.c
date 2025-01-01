#include<stdio.h>
int main()
{
    int *p,i;
    p=(int *)malloc(10);
    for(i=0;i<10;i++)
    printf("\t%d",p[i]);
    return 0;
}