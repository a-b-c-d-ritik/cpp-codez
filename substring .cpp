#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
int main()
{
    char s[20]="programming";
    char f[10];
    cout<<"enter string to search:";
    cin.getline(f,10);
    
    if(strstr(s,f)!=NULL)
    cout<<strstr(s,f)<<endl;
    else
    cout<<"not found"<<endl;
    return 0;
}