#include<stdio.h>
main()
{
int i,n,s;
printf("enter the number: \n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(i%5==0)
continue;
else
s=(i*(i+1))/2;
}
printf("sum=%d\n",s);
}
