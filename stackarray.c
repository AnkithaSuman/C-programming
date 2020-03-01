#include<stdio.h>
#define MAX 10
int top=-1;
int a[MAX];

void push(int e);
int pop();
int peek();
int isEmpty();
int isFull();
void display();

main()
{
    int ch,e;
while(1)
{
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Display the top element\n");
    printf("4.Display the stack elements\n");
    printf("5.Quit\n");

    printf("Enter the choice:\n");
    scanf("%d",&ch);
switch(ch)
{
    case 1:
    printf("Enter the element to be pushed:\n");
    scanf("%d",&e);
    push(e);
    break;

    case 2:
    e=pop();
    printf("the popped element is %d\n",e);
    break;

    case 3:
    printf("the top of the stack is %d\n",peek());
    break;

    case 4:
    display();
    break;

    case 5:
    exit(1);

    default:
    printf("wrong choice");
}
}
}
void push(int e)
{
    if(isFull())
    {
    printf("the stack is overflow\n");
    return;
    }
    top=top+1;
    a[top]=e;
}

int pop()
{
    int e;
    if(isEmpty())
    {
    printf("the stack is underflow\n");
    }
    e=a[top];
    top=top-1;
    return e;
}

int peek()
{
    if(isEmpty())
    {
    printf("the stack is underflow\n");
    }
    else
    return a[top];
}

int isEmpty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}

int isFull()
{
    if(top==(MAX-1))
    return 1;
    else
    return 0;;
}

void display()
{
    int i;
    if(isEmpty())
    {
    printf("the stack is empty\n");
    return;
    }
    printf("the stack elements are:\n'/.");
    for(i=top;i>=0;i--)
    {
    printf(" %d\n",a[i]);
    }
    printf("\n");
}

