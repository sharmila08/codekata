#include<stdio.h>
int main()
{
  int n,k;
  int a[1000],i;
  scanf("%d %d",&n,&k);
  for(i=1;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
for(i=1;i<=k;i++)
  {
    if(i==k)
    {
      printf("%d",a[i]);
    }
  }
    return 0;
}
