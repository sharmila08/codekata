#include<stdio.h>
int main()
{
  char a[100];
  int i,m,count=0;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    count++;
  }
  m=count/2;
  for(i=0;a[i]!='\0';i++)
  {
    if(m==i)
    printf("*");
    else
    printf("%c",a[i]);
  }
  return 0;
}
