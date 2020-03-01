#include<stdio.h>
main()
{
int f,i,num;
printf("enter the number: \n");
scanf("%d",&num);
for(i=0;i<num;i++)
{
f=f*i;
}
printf("the factorial of %d is %d\n",num,f);

}
