#include<stdio.h>
int main()
{
  int num,i;
  scanf("%d",&num);
  if(num<=1000)
  {
  for(i=1;i<=num;i++)
  {
   if(num%i==0)
   {
     printf("%d\t",i);
   }
  }
  }
  return 0;
}
