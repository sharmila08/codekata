#include<stdio.h>
int main()
{
  char s[1000];
  int i,j,count=0;
  scanf("%s",&s);
  for(i=0;s[i]!='\0';i++)
  {
    for(j=i+1;s[j]!='\0';j++)
    {
      if(s[i]==s[j])
      {
        count++;
      }
    }
  }
  if(count!=0)
  {
    printf("no");
  }
  else
  {
    printf("yes");
  }
  return 0;
}
