#include<stdio.h>
int compare(char*a,char*b);
main()
{
char a[100], b[100];
int cmp,s;
printf("enter the first string: ");
scanf("%s", a);
printf("enter the second string: ");
scanf("%s", b);
cmp=compare(a,b);
}
int compare(char*a,char*b)
{
for(int i=0;a[i]!=0;i++)
{
if(a[i]== b[i])//||a[i]!='\0'||b[i]!='0')
printf("strings are equal\n");
else
printf("strings are not equal\n");
return 0;
}
}
