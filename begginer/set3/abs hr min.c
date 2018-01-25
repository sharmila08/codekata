#include<stdio.h>
int main()
{
	int hr1,min1,hr2,min2;
	int hr,min;
	printf("enter the hr:min values\n");
	scanf("%d %d",&hr1,&min1);
	printf("enter the another hr:min value\n");
	scanf("%d %d",&hr2,&min2);
	hr=hr1-hr2;
	min=min1-min2;
	printf("%d %d",hr,min);
	return 0;
}
