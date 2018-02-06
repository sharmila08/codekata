#include<stdio.h>
int main()
{
  int i,pow=1,num;
  printf("enter the num\n");
  scanf("%d",&num);
while(pow<num)
  {
    pow=2*pow;
    if(num==pow)
    {
      printf("yes");
    }
  }
  if(num==1)
  {
    printf("yes");
  }
  return 0;
}
