#include<stdio.h>
int main()
{
  int n,k,count=0,i,b;
  char a[100];
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
   if(i%2!=0)
   {
    b=count++;
     if(b==k)
     {
       printf("%d",a[b]);
     }
   }
 }
  return 0;
}
