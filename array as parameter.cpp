//passing array as structure
#include<iostream>
using namespace std;
void fun(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
}
int main()
{
    int a[5]={2,4,6,8,10};
    fun(a,5);
    return 0;

}