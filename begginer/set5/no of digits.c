#include<stdio.h>
int main()
{
	char a[1000000];
	int i,count=0;
	printf("enter the string\n");
	scanf("%[^\n]s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
		{
			count++;
		}
	}
	printf("%d",count);

	return 0;
}
