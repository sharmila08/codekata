#include<stdio.h>
int main()
{
	int a,a1;
	scanf("%d %d",&a,&a1);
	a=a^a1;
	a1=a^a1;
	a=a^a1;
	printf("after swapping using bitwise operator\n");
	printf("%d %d",a,a1);
return 0;
}
