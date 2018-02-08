#include<stdio.h>
int main()
{
	int m=1,m1=1,a,c;
	scanf("%d",&a);
	printf("%d %d\t",m,m1);
	while(a>0)
	{
	  c=m+m1;
	  m=m1;
	  m1=c;
	  printf("%d\t",c);
	  a=a-2;
	}
  return 0;
}
