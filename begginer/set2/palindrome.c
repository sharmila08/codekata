#include<stdio.h>
int main()
{
	int r,num,sum=0;
	int i;
	printf("enter the num");
	scanf("%d",&num);
	i=num;
	while(num>0)
	{
		r=num%10;
		num=num/10;
		sum=(sum*10)+r;
	}
	if(sum==i)
	printf("\tyes");
	else
	printf("\tno");
	return 0;
}
