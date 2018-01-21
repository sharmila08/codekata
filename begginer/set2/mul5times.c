#include<stdio.h>
int main()
{
	int num,i;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=1;i<=5;i++)
	{
		num=num*i;
	}
	printf("%d",num);
	return 0;
}
