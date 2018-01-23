#include<stdio.h>
int main()
{
	int i,a[1000],n;
	printf("enter the value");
	scanf("%d",&n);
	printf("enter tha array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d \t%d\n",a[i],i);
	}
	return 0;
}
