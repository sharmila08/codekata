#include<stdio.h>
void main()
{
	int sum=0,rem,n,k;
	int i,a,b;
	printf("enter the n,k\t");
	scanf("%d %d",&n,&k);
	for(i=n+1;i<k;i++)
	{
		a=i;
		b=i;
		sum=0;
		while(b>0)
		{
		rem=b%10;
		b=b/10;
		sum=sum+(rem*rem*rem);
		}
		if(sum==a)
		{
			printf("%d",sum);
		}
	}
}
