#include<stdio.h>
int main()
{
  int i,count=0;
  char a[100],b[100],c[100];
  scanf("%s",&a);
  for(i=0;a[i]!='\0';i++)
  {
    count++;
  }
  for(i=0;a[i]!='\0';i++)
  {
    if(i%2!=0)
    {
      b[i]=a[i];
      printf("%c",b[i]);
    }
  }
  printf("\n");
  for(i=0;a[i]!='\0';i++)
  {
     if(i%2==0)
      {
        c[i]=a[i];
      printf("%c",c[i]);
      }
  }
  return 0;
}
