#include<stdio.h>
int main()
{
	int n,i,mul=1;
	scanf("%d",&n);
	if(n>=7)
	{
	for(i=1;i<=n;i++)
	{
	mul=i*7;
	if(mul==n)
	{
		printf("yes");
	}
	}
	}
	if(n==1)
	{
		printf("yes");
	}
	return 0;
}
