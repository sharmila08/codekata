#include<stdio.h>
int main()
{
	int i,j,n,temp;
	int a[1000];
	printf("enter the number\n");
	scanf("%d",&n);
	printf("enter the array of n numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		if(a[i]==n)
		{
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		{
		printf("%d\t",a[i]);
		}
		}
		else
		printf("enter the num in limit");
	return 0;
}
