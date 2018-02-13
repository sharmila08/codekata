#include<stdio.h>
int main()
{
  char a[100],b[100];
  int i,j=0,count=-1,count1=-1;
  scanf("%s",&a);
  for(i=0;a[i]!='\0';i++)
  {
    count++;
  }
  for(i=count;i>=0;i--)
  {
  b[j]=a[i];
  j++;
  }
  for(i=0;a[i]!='\0';i++)
  {
    for(j=i;j<=i;j++)
  {
  if(a[i]==b[j])
  {
    count1++;
  }
  }
  }
  if(count==count1)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
return 0;
}
