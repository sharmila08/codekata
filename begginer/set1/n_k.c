#include<stdio.h>
void main()
{
int n,k,a[50],i;
int sum=0;
printf("enter the value of n and k\n");
scanf("%d %d",&n,&k);
printf("enter the array of n integers\t");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
if(n>=k)
{
for(i=0;i<k;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
}
else
{
printf("given k number is greater than n");
}
}
