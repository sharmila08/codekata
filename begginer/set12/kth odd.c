#include<stdio.h>
int main()
{
  int n,k,count=0,i;
  char a[100];
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  //printf("%d",a[i]);
  }
  for(i=0;i<n;i++)
  {
   if((a[i]%2)!=0)
   { 
     count++;
     if(count==k)
     {
       printf("%d",a[i]);
     }
   }
 }
  return 0;
}
