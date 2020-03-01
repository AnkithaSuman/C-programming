#include<stdio.h>
#include<string.h>
void concat(char [],char []);
int main()
{
char s1[100],s2[100];
//int i=0,j=0;
printf("Enter the first string : ");
scanf("%s",s1);
printf("Enter the second string : ");
scanf("%s",s2);
concat(s1,s2);
printf("concatenated string is %s\n",s1);
return 0;
}
void concat(char s1[],char s2[])
{
    int i,j=0;
while (s1[i]!='\0')
{
i++;
}
while (s2[j]!='\0')
{
s1[i]=s2[j];
i++;
j++;
}
s1[i]='\0';
//printf("concatenated string is %s\n", s1);
}

