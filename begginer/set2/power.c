#include<stdio.h>
void main()
{
	int pow,num,i=0;
	int ans=1;
	printf("enter the number and then power");
	scanf("%d %d",&num,&pow);
	while(i<pow)
	{
		ans=ans*num;
		i++;
	}
	printf("%d",ans);
}
