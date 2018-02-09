#include<stdio.h>
int main()
{
	int m,i,mul=1;
	scanf("%d",&m);
	if(m>=7)
	{
	for(i=1;i<=m;i++)
	{
	mul=i*13;
	if(mul==m)
	{
		printf("yes");
	}
	}
	}
	if(m==1)
	{
		printf("yes");
	}
	return 0;
}
