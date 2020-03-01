#include<stdio.h>
int len(char*s);
main()
{
char s[100];
int count=0;
printf("enter the string: ");
scanf("%s",s);
int l=len(s);
//printf("the string length is %d",count);
}
int len(char*s)
{
    int count=0;
for(int i=0;s[i]!=0;i++)
{
count++;
}
printf("the string length is %d",count);
}

