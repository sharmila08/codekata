#include<stdio.h>
int main()
{
	char a[100],b[100];
	int i,count1=0,count2=0;
	int length;
	printf("enter the frst string\n");
	for(i=0;i!='\0';i++)
	{
		scanf("%c",&a[i]);
		count1++;
	}
	printf("enter the second string");
	for(i=0;i!='\0';i++)
	{
		scanf("%c",&b[i]);
		count2++;
	}
	length=count1;
	for(i=length;a[length]<count2;i++)
	{
		a[length]=b;
	}
	printf("%c",a[length]);
}
