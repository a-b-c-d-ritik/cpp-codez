#include<iostream>
using namespace std;
int main()
{
    string name;
    std::cout<<"enter your name";
    getline(cin,name);
    std::cout<<"\nwelcome "<<name;

    return 0;
}