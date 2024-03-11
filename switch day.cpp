#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter day no:";
    cin>>num;
    switch(num)
    {
        case 1:
        cout<<"\nMONDAY";
        break;

        case 2:
        cout<<"\nTUESDAY";
        break;

        case 3:
        cout<<"\nWEDNESDAY";
        break;

        case 4:
        cout<<"\nTHURSDAY";
        break;

        case 5:
        cout<<"\nFRIDAY";
        break;

        case 6:
        cout<<"\nSATURDAY";
        break;

        case 7:
        cout<<"\nSUNDAY";
        break;

        default:
        cout<<"invalid entry";
    }
    return 0;
}