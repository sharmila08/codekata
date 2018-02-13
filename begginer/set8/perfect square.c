#include<stdio.h>
int main()
{
  int m,n,num,num1,i;
  scanf("%d %d",&m,&n);
  num=m*n;
  for(i=1;i<=num;i++)
  {
    num1=i*i;
  if(num==num1)
  {
    printf("yes");
  }
  }
  return 0;
}
