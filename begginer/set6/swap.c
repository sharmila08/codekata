#include<stdio.h>
int main()
{
	int swap,n1,n2;
	printf("enter two num\t");
	scanf("%d %d",&n1,&n2);
	swap=n1;
	n1=n2;
	n2=swap;
	printf("%d %d",n1,n2);
	return 0;
}
