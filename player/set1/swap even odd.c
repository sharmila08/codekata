#include<stdio.h>
int main()
{
 char a[100],temp;
 int i,j,n;
 scanf("%s",&a);
 n=strlen(a);
 printf("%d",n);
 for(i=0;a[i]<n;i++)
 {
   for(j=i+1;a[j]>i;j--)
   {
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
   }
 }
 for(i=0;a[i]<n;i++)
 {
   printf("%c",a[i]);
 }
 return 0;
}
