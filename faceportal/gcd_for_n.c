#include<stdio.h>
int main()
{
	int n,i,a[100],j,temp,count=0,c,v;
	scanf("%d",&n);
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
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
            v=a[0];
	while(v>0)
	{
	    count=0;
		for(i=0;i<n;i++)
		{
			if(a[i]%v==0)
			{
			    c=v;
				count++;
			}
		}
		if(count==n)
		{
			printf("%d",c);
			break;
		}
		v--;
	}
	
	return 0;
}
