#include<stdio.h>
swap(int*,int*);
main()
{
int a,b;
printf("enter the value of a : ");
scanf("%d",&a);
printf("enter the value of b : ");
scanf("%d",&b);
swap(&a,&b);
printf("the swapped value of a is %d\n",a);
printf("the swapped value of b is %d\n",b);
}
swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}
