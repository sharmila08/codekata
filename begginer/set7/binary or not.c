#include<stdio.h>
int main()
{
	char a[100];
	int count=0,i;
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!='0' &&a[i]!='1')
		{
		count++;
		}
	}
	if(count==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
