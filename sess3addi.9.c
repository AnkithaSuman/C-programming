#include<stdio.h>
main()
{
    char ch;
    printf("enter the character: \n");
    scanf("%c",&ch);

    if(ch=='a'||ch=='A')
        printf("A for Apple\n");
    else if(ch=='b'||ch=='B')
        printf("B for Bat\n");
    else if(ch=='d'||ch=='D')
        printf("D for Dog\n");
    else if(ch=='f'||ch=='F')
        printf("F for Fan\n");
    else
        printf("character not in range\n");



}

