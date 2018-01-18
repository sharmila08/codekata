#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
clrscr();
printf("enter the limit");
scanf("%d",&n);
if(n!=0)
{
for(i=0;i<=n;i++)
{
sum=sum+i;
}
}
printf("\n%d is sum of given natural number",sum);
getch();
}
