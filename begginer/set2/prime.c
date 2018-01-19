#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,count=0;
clrscr();
printf("enter the value of n");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
count=1;
}
if(count==1)
{
printf("no");
}
else
{
printf("yes");
}
getch();
}
