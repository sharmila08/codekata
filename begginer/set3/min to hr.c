#include<stdio.h>
int main()
{
	int min,hr=60,h,m;
	printf("enter the minutes");
	scanf("%d",&min);
	if(min>hr)
	{
	h=min/hr;
	m=min%hr;
	printf("%d  %d",h,m);
	}
	else
	{
		printf("0 %d",min);
	}
	return 0;
}
