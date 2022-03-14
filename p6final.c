#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
   int n;
  printf("enter the length of string: /n");
  scanf("%d",&n);
  printf("Enter the string: /n");
  for(i=0;i<n;i++)
    {
      scanf("%s",a[i]);
    }
}
int count_words(char *string)
{
  int i,no_words=1;
  for(i=0;i<n;i++)
    {
      if(a[i]!=0)
      {
       if(a[i]==" ")
       {
         no_words=no_words+1;
       }
       else
       {
         no_words=no_words;
       }
     }
    
    }
  return no_words;
}
void output(char *string,int no_words)
{
  printf("%d",no_words);
}
void main()
{
  int n,no_words;
   input_string(&a);
  count_words(&string)
}
