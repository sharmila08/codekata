#include<stdio.h>
int main()
{
  char a[100],b[100];
  int i,j,count1=0,count2=0,count=0;
  scanf("%s %s",&a,&b);
  for(i=0;a[i]!='\0';i++)
  {
  count1++;
  }
  for(j=0;b[j]!='\0';j++)
  {
    count2++;
  }
    for(i=0;a[i]!='\0';i++)
    {
      for(j=i;j<=i;j++)
      {
        if(a[i]==b[j])
        {
          count++;
        }
      }
    }
  if(count==count1&&count==count2)
  {
    printf("yes");
  }
  else
  printf("no");
  return 0;
}
