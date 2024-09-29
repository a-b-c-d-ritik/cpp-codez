#include<iostream.h>

class BCA33
{
    private:
    int x,y;
    protected:
    int z;

    public:

    void event()
    {
        int sum;
        cout<<"x=";
        cin>>x;
        y=6;
        sum=x+y;
        cout<<"sum="<<sum<<"\n"<<endl;

        if(perform())
        cout<<"odd";
        else
        cout<<"even";
    }

    private:
    int perform()
    {
        cout<<"\n"<<"z=";
        cin>>z;
        return z%2;
    }
};

int main()
{
    BCA33 z;
    z.event();
    return 0;
}