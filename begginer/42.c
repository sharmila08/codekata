#include<stdio.h>
void main()
{
  char a[100],b[100];
  int i,count1=0,count2=0;
  scanf("%s %s,&a,&b");
  for(i=0;a[i]!='\0';i++)
  {
  count1++;
  }
  for(i=0;b[i]!='\0';i++)
  {
    count2++;
  }
  if(count1>count2)
  {
    for(i=0;a[i]!='\0';i++)
    {
    printf("%s",a);
    }
  }
  else 
  {
     for(i=0;b[i]!='\0';i++)
     {
      printf("%s",b);
     }
       
  }
  return 0;
}
