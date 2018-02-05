#include<stdio.h>
int main()
{
char a[100];
int i,count=0,length;
printf("enter the string\n");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
	count++;
}
length=count;
for(i=length;i>=0;i--)
{
printf("%c",a[i]);	
}
return 0;
}
