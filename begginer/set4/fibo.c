#include<stdio.h>
int main()
{
	int a=1,b=1,n,c;
	scanf("%d",&n);
	printf("%d %d\t",a,b);
	while(n>0)
	{
	  c=a+b;
	  a=b;
	  b=c;
	  printf("%d\t",c);
	  n=n-2;
	}
  return 0;
}
