#include<stdio.h>
int main()
{
	int m,n,add;
	printf("enter two numbers\n");
	scanf("%d %d",&m,&n);
	add=m+n;
	if(add%2==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
