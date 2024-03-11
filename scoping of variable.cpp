#include<iostream>
using namespace std;
int x=7;
int main()
{
    int x=10;
    {
        int x=9;
        cout<<x<<endl;
    }
        cout<<x<<endl;
        cout<<::x<<endl;

    return 0;
}