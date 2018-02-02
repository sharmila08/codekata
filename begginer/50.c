#include<stdio.h>
void main()
{
  int n,i,a=1;
  int b[100];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    a=a*2;
    printf("%d\n",a);
  }
  for(i=0;b[i]<n;i++)
  {
    if(b[i]==n)
    {
      printf("yes");
    }
  }
}
