#include<stdio.h>
void main()
{
	int sum=0,rem,num;
	int i;
	printf("enter the number\t");
	scanf("%d",&num);
	i=num;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+(rem*rem*rem);
	}
if(sum==i)
{
	printf("yes");
}
else
{
printf("no");
}
}
