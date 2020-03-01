#include<stdio.h>
struct complex
{
    int real;
    int img;
}
main()
{
    struct complex a,b,c;
    printf("enter the first complex number\n");
    scanf("%d %d",&a.real,&a.img);
    printf("enter the second complex number\n");
    scanf("%d %d",&b.real,&b.img);
    c.real=a.real+b.real;
    c.img=a.img+b.img;

    if(c.img>0)

    printf("the sum of %d+%di and %d+%di is %d+%di)\n",a.real,a.img,b.real,b.img,c.real,c.img);
    else
    printf("the sum of %d+%di and %d+%di is %d%di\n",a.real,a.img,b.real,b.img,c.real,c.img);

}






