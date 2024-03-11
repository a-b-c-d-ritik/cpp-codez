#include<iostream>
using namespace std;
void fn(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fn(n-1);
        fn(n-1);
    }
}
int main()
{
    int x=3;
    fn(3);
    return 0;
}