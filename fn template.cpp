#include<iostream>
using namespace std;
template<class T>

T add(T a,T b)
{
    return a+b;
}

int main()
{
    cout<<"sum is = "<<add(10,25)<<endl;
    cout<<"sum is = "<<add(10.5f,20.09f)<<endl;
    return 0;
}