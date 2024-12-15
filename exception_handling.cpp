#include<iostream.h>

int main()
{
    int x=10,y=5,z;

    try
    {
        if(y==0)
        throw 1;

        z=x/y;
        cout<<x<<"/"<<y<<"="<<z;
    }
    catch(int e)
    {
        cout<<"exception: Division by 0"<<endl;
    }
    
}