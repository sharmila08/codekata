#include<stdio.h>
int main()
{
	int fact,i;
	printf("enter the number\n");
	scanf("%d",&fact);
	for(i=fact-1;i>0;i--)
	{
	fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}
