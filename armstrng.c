#include<stdio.h>
main()
{
int t,n,rem,sum=0,c;
printf("enter the number:\n");
scanf("%d",&n);
t=n;
while(t!=0)
{
rem=t%10;
c=rem*rem*rem;
sum=sum+c;
t=t/10;
}
//printf("sum=%d ",sum);
if(sum == n)
   printf(" the number is armstrong\n");
else
   printf("the number is not armstrong\n");
}
