#include<stdio.h>
int main()
{
	char b[1000];
	int i,count1=0;
	printf("enter the string\n");
	scanf("%[^\n]s",&b);
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==' ')
		{
			count1++;
		}
	}
	printf("%d",count1+1);

	return 0;
}
