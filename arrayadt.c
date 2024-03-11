#include<stdio.h>
struct array
{
    int A[10];
    int size;
    int length;
};

void display(struct array arr)
{
    int i;
    printf("elements are:\n");
    for(i=0;i<arr.length;i++)
    printf("\n%d",arr.A[i]);
    printf("\n");
}

void append(struct array *p,int value)
{
    int i;
    p->A[p->length]=value;
    p->length++;
    for(i=0;i<p->length;i++)
    printf("\n%d",p->A[i]);
}

void insert(struct array *p,int index,int value)
{
    int i;
    for(i=p->length;i>=index;i--)
    p->A[i]=p->A[i-1];

    p->A[index]=value;
    p->length++;

    display(*p);
}

void delete(struct array *p, int index)
{
    if(index>=0 && index<p->length)
    {
    int i,x;
    x=p->A[index];
    for(i=index;i<p->length;i++)
    p->A[i]=p->A[i+1];
    p->length--;
    printf("\n%d is deleted ",x);
    display(*p);
    }
}

int main()
{
    struct array arr={{2,4,5,6,8},10,5};
    
    display(arr);

    append(&arr,45);
    
    insert(&arr,4,25);

    delete(&arr,4);
    
    return 0;
}