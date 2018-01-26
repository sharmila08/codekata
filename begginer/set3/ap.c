#include<stdio.h>
int main()
{
	char a[1000];
	int i,sum=0;
	int N,A,D;
	printf("enter the value of N,A,D\n");
	scanf("%d %d %d",&N,&A,&D);
	while(i<N)
	{
		if(i==0)
		{
			a[i]=A;
		}
		else
		{
			a[i]=a[i-1]+D;
		}	
		i++;
	}
	for(i=0;i<N;i++)
	{
	sum=sum+a[i];
	}
		printf("%d",sum);
	return 0;
}
