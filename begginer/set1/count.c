#include<stdio.h>
void main()
{
	int n;
	int count=0;
	printf("enter the digits");
	scanf("%d",&n);
	if(n>10)
	{
		while((n=n/10)>1)
		{
		count++;
		}
		printf("%d",count+1);
	}
	else
	printf("1");
}
