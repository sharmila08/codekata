#include<stdio.h>
int main()
{
	char a[1000];
	int i,count=0;
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(!(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'||a[i]==' '))
		{
			count++;
		}
	}
	printf("%d",count);
}
