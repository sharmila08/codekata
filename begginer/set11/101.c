#include <stdio.h>

int main(void) {
	int num,p,a=1,i;
	scanf("%d %d",&num,&p);
for(i=0;i<p;i++)
{
   a=a*10;
 }
 printf("%d",num%a);
	return 0;
}
