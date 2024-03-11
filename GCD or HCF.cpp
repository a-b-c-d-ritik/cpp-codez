#include<iostream>
using namespace std;
int main()
{
   int m,n;
   cout<<"enter m=";
   cin>>m;
   cout<<"\nenter n=";
   cin>>n;

   while(m!=n)
   {
    if(m>n)
    m=m-n;
    else
    n=n-m;
   }
   cout<<"GCD is = "<<m;
    return 0;
}