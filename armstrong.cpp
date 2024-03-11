#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int d,sum=0,num,temp,ctr=0;
   cout<<"enter num =";
   cin>>num;
   temp=num;
   while(num>0)
   {
    d=num%10;
    if(d!=0)
    ctr++;
    num=num/10;
   }
   
    num=temp;
    d=0;

    while(num>0)
   {
    d=num%10;
    sum+=pow(d,ctr);
    num=num/10;
   }

   if(temp==sum)
   cout<<temp<<" is Armstrong"<<endl;
   else
   cout<<temp<<" is not Armstrong"<<endl;
    return 0;
}