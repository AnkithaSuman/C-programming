#include<stdio.h>
main()
{
int x=10,y=4,z=1;
y>>=x&(y&&z);
printf("%d",y);
}
