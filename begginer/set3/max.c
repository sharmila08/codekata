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
		printf("the maximum num is %d\t",a[n-1]);
	return 0;
}
