#include<stdio.h>
int main()
{
	int rem,num,sum=0;
	int i;
	printf("enter the num\n");
	scanf("%d",&num);
	i=num;
	while(num>0&&num<=1000)
	{
		rem=num%10;
		num=num/10;
		sum=(sum*10)+rem;
	}
	printf("%d",sum);
	return 0;
}
