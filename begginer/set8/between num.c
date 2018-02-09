#include<stdio.h>
int main()
{
	int n,a,b,i;
	int count=0;
	printf("enter the limits\n");
	scanf("%d %d",&a,&b);
	printf("give the num to find\n");
	scanf("%d",&n);
	for(i=a+1;i<b;i++)
	{
		if(i==n)
		{
			count++;
		}
	}
	           if(count==1)
	           {
	           	printf("yes");
	           }
		else
		{
			printf("no");
		}
	return 0;
}
