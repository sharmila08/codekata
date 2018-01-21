#include<stdio.h>
void main()
{
	int n,k,i,j;
	int count=0;
	printf("enter the value of n and k");
	scanf("%d %d",&n,&k);
	for(i=n+1;i<k;i++)
	{
		count=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count=1;
			}
		}
			if(count==0)
			{
				printf("\t%d\t",i);
			}
	}
}
