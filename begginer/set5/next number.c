#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  if(n<=10000000)
  {
  printf("%d is the next number",n+1);
  }
  else
  {
    printf("give the numbers within a limit");
  }
  return 0;
}
