#include<stdio.h>
int main()
{
 int a[100];
 int i,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=1;i<n;i++)
 {
   a[0]=a[0]+a[i];
 }
 printf("%d",a[0]);
 return 0;
}
