#include<stdio.h>
int main(void)
{
int m,count=0,n=1,i;
scanf("%d",&m);
while(m!=1)
{
m=m/2;
count++;
}
for(i=0;i<=count;i++)
n=n*2;
printf("%d\t",n);
return 0;
}
