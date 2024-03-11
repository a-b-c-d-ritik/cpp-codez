#include<iostream>
using namespace std;
int main()
{
    int m1,m2,m3,total;
    float avg;
    cout<<"Enter marks :";
    cout<<"\nm1=";
    cin>>m1;
    cout<<"\nm2=";
    cin>>m2;
    cout<<"\nm3=";
    cin>>m3;
    total=m1+m2+m3;
    avg=total/3.0;
    if(avg>=60)
    cout<<"Grade=A";
    else if(avg>=35 && avg<60)
    cout<<"Grade=B";
    else
    cout<<"Fail";
    return 0;
}