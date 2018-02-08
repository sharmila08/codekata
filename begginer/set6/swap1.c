#include<stdio.h>
int main()
{
	int swap,m1,m2;
	printf("enter two num\t");
	scanf("%d %d",&m1,&m2);
	swap=m1;
	m1=m2;
	m2=swap;
	printf("%d %d",m1,m2);
	return 0;
}
