#include<stdio.h>
#include<conio.h>
#define max 10
int st[max],top=-1;
void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
void main()
{
    int val,opt;
    printf("1-PUSH\n");
    printf("2-POP\n");
    printf("3-PEEK\n");
    printf("4-DISPLAY\n");
    printf("enter option\n");
    scanf("%d",&opt);    
    while(opt!=5)
    {
        switch(opt)
        {
            case 1:
                printf("enter a element to push");
                scanf("%d",&val);
                push(st,val);
                break;
            case 2:
                val=pop(st);
                if(val!=-1)
                    printf("\n The value deleted from stack is: %d",val);
                break;
            case 3:
                val=peek(st);
                if(val!= -1)
                    printf("\n The value stored at the top is %d",val);
                break;
            case 4:
                display(st);
                break;
            default:
                printf("invalid option");
                break;   
        }
        printf("enter option\n");
        scanf("%d",&opt);
    }
    getch();
}
void push(int st[],int v)
{
    if(top!=max-1)
    {
        top+=1;
        st[top]=v;
    }
    else
        printf("\n stack overflow");
}
int pop(int st[])
{
    int val;
    if(top!=-1)
    {
        val=st[top];
        top--;
        return val;
    }
    else
    {
        printf("\n stack underflow");
        return -1;
    }
}
int peek(int st[])
{
    if(top!=-1)
    {
        return st[top];
    }
    else
    {
        printf("The stack is empty");
        return -1;
    }
}
void display(int st[])
{
    int i;
    if(top!=-1)
    {
        for(i=top;i>=0;i--)
            printf("%d",st[i]);
    }
    else
        printf("\n stack is empty");
}
