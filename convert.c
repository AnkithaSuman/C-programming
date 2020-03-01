#include<stdio.h>
int convert(char[]);
int main()
{
char s[100];
printf("enter the String to convert: ");
scanf("%s",s);
char cas=convert(s);
printf("the string in Upper Case is %s", s);
return 0;
}
int convert(char s[])
{
int i;
for (i = 0;s[i]!='\0'; i++)
{
if(s[i]>= 'a' && s[i]<= 'z')
{
s[i] = s[i] -32;
}
}
}

