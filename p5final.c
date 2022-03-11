#include<stdio.h>
int input_size()
{
  int n;
  printf("enter the size of the array: ");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int i;
  printf("enter the array elements: \n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int find_largest(int n,int a[n])
{ 
 int i,big=0,largest;
  for(i=0;i<n;i++)
    {
      if (a[i]>big)
      {
        big=a[i];
        largest=i;
        }
      else
      {
        big=big;
      }
    }
  return largest;
}
void output(int n,int a[n],int largest)
{
  printf("the index of the largest number in an array is %d",largest);
}
void main()
{
  int n,biggest;
  n=input_size();
   int a[n];
  input_array(n,a);
  biggest=find_largest(n,a);
  output(n,a,biggest);
}