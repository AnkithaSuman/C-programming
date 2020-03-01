#include<stdio.h>
main()
{
    int i,l,s;
    char name[100];
    printf("enter your name: \n");
    scanf("%s",name);
    l=strlen(name);
    s=sizeof(name);
    printf("name is %s \nstring length is %d \narray size is %d\n",name,l,s);

}
