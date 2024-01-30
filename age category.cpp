#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter age:";
    cin>>age;
    if(age>=12 && age<=30)
    cout<<"\nYoung";
    else if(age>=0 && age<=12)
    cout<<"Children";
    else
    cout<<"Old";
    return 0;

}