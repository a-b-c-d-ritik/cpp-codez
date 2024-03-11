#include<iostream>
using namespace std;
int main()
{
    char s[50],k[50];
    cout<<"enter name:";
    cin.get(s,50);
    cout<<"welcome "<<s<<endl;
    cin.ignore();
    cout<<"enter name:";
    cin.getline(k,50);
    cout<<"hola "<<k;
    return 0;
}