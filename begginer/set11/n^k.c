#include<stdio.h>
void main()
{
  int n,k,a=1,i;
  scanf("%d %d",&n,&k);
  for(i=0;i<k;i++)
  {
    a=n*a;
  }
  printf("%d",a);
}
