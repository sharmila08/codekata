#include<stdio.h>
int main()
{
  int num,ans,mul,a;
  scanf("%d",&num);
  ans=num%10;
  a=10-ans;
  mul=a+num;
  printf("%d",mul);
  return 0;
}
