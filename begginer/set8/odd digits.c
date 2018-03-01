#include<stdio.h>
int main()
{
  int n,r,sum=0,count=0;
  scanf("%d",&n);
  if(n<=100000)
  {
  while(n>0)
  {
    r=n%10;
    n=n/10;
    sum=(sum*10)+r;
  }
  while(sum>0)
  {
    r=sum%10;
    sum=sum/10;
    n=(n*10)+r;
    count++;
    if((r%2)!=0)
    {
      printf("%d\t",r);
    }
  }
  }
  return 0;
}
