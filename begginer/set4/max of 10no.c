#include<stdio.h>
int main()
{
	int i,j,temp;
	int a[10];
	printf("enter the array of n numbers\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<10;i++)
		{
			for(j=i+1;j<10;j++)
			{
				if(a[i]>a[j])
				{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
				}
			}
		}
		printf("the maximum num is %d\t",a[9]);
	return 0;
}
