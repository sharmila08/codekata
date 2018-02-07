#include<stdio.h>
int main()
{
	int r,num,sum=0;
	printf("enter the num");
	scanf("%d",&num);
	while(num>0)
	{
		r=num%10;
		num=num/10;
		sum=sum+r;
	}
	printf("\n%d",sum);
	return 0;
}
