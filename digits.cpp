#include<iostream>
using namespace std;
int main()
{
   int d,num;
   cout<<"enter num=";
   cin>>num;
   cout<<"\ndigits are: ";
   while(num>0)
   {
    d=num%10;
    num=num/10;
    cout<<d<<"\t";
   }
   
   /*for(num;num>0;num=num/10)
   {
    d=num%10;
    cout<<d<<"\t";
   } */
   
    return 0;
}