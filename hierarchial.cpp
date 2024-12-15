#include<iostream.h>

class studentL2
{
char name[10];
studentL2 *p;
};

class coursesL1
{
char coursenm[5];
studentL2 *stud[];
};

class collegeL0
{
char collegenm[10];
coursesL1 *course[];
friend coursesL1 addcourse();
};
collegeL0 *root;
coursesL1 addcourse()
{   
    coursesL1 *t;
    t=new coursesL1();

    cout<<"Enter course name:";
    cin>>t.coursenm;
    return &t.coursenm;
}

int main()
{   int n;
    root=new collegeL0();
    

    while(1)
    {
    cout<<"select:"<<endl;
    cout<<"1.Enroll a student\n2.Add a course\n3.Remove a student\n4.close a course";
    cin>>n;
    switch(n)
    {
        case 1:
        break;
        case 2:
        break;
        case 3:
        break;
        case 4:
        break;
        default:
        cout<<"invalid input";
        //exit(0);
    }
    }
    return 0;
}


