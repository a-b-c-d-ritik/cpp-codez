#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct students
{
int rollno;
char name[50];
char ph[10];
float marks;
};

int main()
{
char c;
int i,j=0,records,option;
FILE *fp=NULL;
char fnm[100];
struct students s[5];

while(1)
{
TOP:
printf("\nDo you want to \n1.Add Data\t\t2.Display Data\t\t3.Exit:");
scanf("%d",&option);

fflush(stdin);
switch(option)
{
case 1:
printf("\nEnter file name:");
fflush(stdin);
gets(fnm);
fp=fopen("E://abc.txt","a");

if(fp==NULL)
{
printf("\nFile is not created");
return 0;
}
else
{
fprintf(fp,"Roll No\t\tName\t\tPhNo\t\t\t\t\tMarks\n");
printf("\nEnter no of records you want to enter: ");
fflush(stdin);
scanf("%d",&records);
fflush(stdin);
for(i=0;i<records;i++)
{
    printf("\nEnter Roll No:");
    scanf("%d",&s[i].rollno);
    fprintf(fp,"%d\t\t",s[i].rollno);

    printf("\nEnter Name:");
    fflush(stdin);
    gets(s[i].name);
    fprintf(fp,"%s\t\t",s[i].name);


    printf("\nEnter Phone no:");
    fflush(stdin);
    gets(s[i].ph);
    fprintf(fp,"%s",s[i].ph);
    

    printf("\nEnter marks:");
    fflush(stdin);
    scanf("%f",&s[i].marks);
    fprintf(fp,"\t\t%f",s[i].marks);

    fprintf(fp,"\n");
}
fclose(fp);
break;

case 2:
fp=fopen("E://abc.txt","r");

if(fp==NULL)
{
printf("\nFile is not available");
return 0;
}
else
{
while((c=fgetc(fp))!=EOF)
{
    printf("%c",c);
}
fclose(fp);
}
break;

case 3:
exit(0);

default:
goto TOP;
}
}
}
    return 0;
}