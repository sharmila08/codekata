#include<stdio.h>
int main()
{
	int i,j,temp,n=10;
	int a[10];
	printf("enter the array of n numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
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
		printf(" %d\t",a[n-1]);
	return 0;
}
