#include<stdio.h>
int main()
{
	char a[1000];
	int i,count=0,count1=0;
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
	if(a[i]>='a' || a[i]<='z' || a[i]>='A' || a[i]<='Z')
	{
		count++;
	}
	if(a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'||a[i]=='0')
	{
		count1++;
	}
	}
	if(count>0 && count1>0)
	{
		printf("yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
