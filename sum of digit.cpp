#include<iostream>
using namespace std;
int main()
{
   int d,sum=0,num,temp;
   cout<<"enter num =";
   cin>>num;
   temp=num;
   while(num>0)
   {
    d=num%10;
    sum=sum+d;
    num=num/10;
   }
   cout<<"sum of digits "<<temp<<"is = "<<sum;
    return 0;
}