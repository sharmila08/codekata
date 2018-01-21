#include<stdio.h>
int main()
{
	int fact,i;
	printf("enter the number\n");
	scanf("%d",&fact);
	if(fact<=20)
	{
	for(i=fact-1;i>0;i--)
	{
	fact=fact*i;
	}
	printf("%d",fact);
	}
	else
	printf("give the number less than or equal to 20");
	return 0;
}
