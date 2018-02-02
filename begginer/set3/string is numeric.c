#include<stdio.h>
int main()
{
	char a[1000];
	int i,count=0,n;
	printf("enter the string\n");
	scanf("%[^\n]s",&a);
	printf("enter the number of elements");
	scanf("%d",&n);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
		{
		count++;
		}
	}
		if(count==n)
		{
		  printf("\nyes");
		}
	else
	{
	  printf("no");
	}
	return 0;
}

