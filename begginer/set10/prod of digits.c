#include<stdio.h>
int main()
{
  int n,mul=1,r;
  scanf("%d",&n);
  if(n<=1000000000)
  {
  while(n>0)
  {
    r=n%10;
    n=n/10;
    mul=mul*r;
  }
  }
  printf("%d",mul);
  return 0;
}
