#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter age:";
    cin>>age;
    if(age<12 || age>30)
    cout<<"\neligible for offer";
    else
    cout<<"\n not eligible for offer";
    return 0;
}