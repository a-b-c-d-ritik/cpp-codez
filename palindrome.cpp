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
    sum=sum*10+d;
    num=num/10;
   }
   if(temp==sum)
   cout<<temp<<" is palindrome"<<endl;
   else
   cout<<temp<<" is not palindrome"<<endl;
    return 0;
}