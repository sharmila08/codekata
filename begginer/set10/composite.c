#include<stdio.h>
int main()
{
int a,i,count1=0;
printf("enter the value of a\n");
scanf("%d",&a);
for(i=2;i<a;i++)
{
if(a%i==0)
count1=1;
}
if(count1==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
