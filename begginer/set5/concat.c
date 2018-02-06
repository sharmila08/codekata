#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
int i,l,k,n;
printf("enter two strings\n");
scanf("%s",&a);
scanf("%s",&b);
l=strlen(a); 
k=strlen(b);
n=l+k;
for(i=0;i<n;i++)
{
   a[l]=b[i];
   l++;
}
printf("%s",a);

}
