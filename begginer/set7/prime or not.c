#include<stdio.h>
int main()
{
int m,i,count1=0;
printf("enter the value of m\n");
scanf("%d",&m);
for(i=2;i<m;i++)
{
if(m%i==0)
count1=1;
}
if(count1==1)
{
printf("no");
}
else
{
printf("yes");
}
return 0;
}
