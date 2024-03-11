#include<iostream>
using namespace std;
int add(int x,int y,int z=0)
{
    return x+y+z;
}

int main()
{//decleration error dega
cout<<"sum = "<<add(5,8)<<endl;
cout<<"sum = "<<add(5,8,6)<<endl;
return 0;
}