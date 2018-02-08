#include<stdio.h>
int main()
{
	int m,n,sub;
	printf("enter two numbers\n");
	scanf("%d %d",&m,&n);
	sub=m+n;
	if(sub%2==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
