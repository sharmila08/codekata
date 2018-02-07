#include<stdio.h>
int main()
{
	int n,m,mul;
	scanf("%d %d",&n,&m);
	mul=n*m;
	if(mul%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
