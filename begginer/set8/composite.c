#include<stdio.h>
int main()
{
int n,i,count1=0;
printf("enter the value of n\n");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
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
