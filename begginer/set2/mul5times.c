#include<stdio.h>
int main()
{
	int num,i,a;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=1;i<=5;i++)
	{
		a=num*i;
		printf("\t%d",a);
	}
		return 0;
}
