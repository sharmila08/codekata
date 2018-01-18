#include <stdio.h>

int main(void) {
	int l;
  printf("enter the year");
	scanf("%d",&l);
	if(l%4==0)
	printf("leap year");
	else
	printf("not a leap year");
	return 0;
}
