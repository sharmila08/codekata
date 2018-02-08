#include<stdio.h>
int main()
{
	int i,j,t;
	int b[10];
	printf("enter the array of n numbers\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
		for(i=0;i<10;i++)
		{
			for(j=i+1;j<10;j++)
			{
				if(b[i]>b[j])
				{
				t=b[j];
				b[j]=b[i];
				b[i]=t;
				}
			}
		}
		printf("the maximum num is %d\t",b[9]);
	return 0;
}
