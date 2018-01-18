#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the three values");
scanf("%d\t%d\t%d\t",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is large number");
}
else if(b>a&&b>c)
{
printf("b is large number");
}
else
{
printf("c is large number");
}
getch();
}
