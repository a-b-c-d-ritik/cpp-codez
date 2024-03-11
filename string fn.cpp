#include<iostream>
//#include<cstring>
#include<string.h>
using namespace std;
int main()
{
    char s[]="hello",j[]=" duniya",k[20];
    cout<<"length of string is : "<<strlen(s)<<endl;
    strcat(s,j);
    cout<<s<<endl;
    strncat(s,j,3);
    cout<<s<<endl;

    strcpy(k,s);
    cout<<k;
    return 0;
}