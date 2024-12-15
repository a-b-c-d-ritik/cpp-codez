#include<iostream.h>

int div(int x,int y)
{
    if(y==0)
    {//throw 1;
    throw "div by 0";
    }
    else 
    return x/y;
}
int main()
{
    int x=10,y=0,z;
    
    try
    {
        z=div(x,y);
        cout<<x<<"/"<<y<<"="<<z;
    }
    //catch(int e)
    catch(int e)
    {
       cout<<"int error: div by 0";
    }
    catch(...)
    {
        cout<<"catch all";
    }
    
    return 0;
}