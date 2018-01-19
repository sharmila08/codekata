#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,k;
clrscr();
printf("enter the value of n and k");
	scanf("%d %d",&n,&k);
	for(i=n+1;i<k;i++)
	{
		if(i%2==0)
		printf("\t%d\t",i);
	}
  getch();
}
