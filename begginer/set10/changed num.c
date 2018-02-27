#include<stdio.h>
int main()
{
  int n,a[100],i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
 j=a[0];
  for(i=0;i<n;i++)
  {
      if(j!=a[i])
      {
        printf("%d\t",j);
      }
      j++;
  }
}
