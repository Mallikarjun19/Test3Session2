#include<stdio.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("enter the numerator value: ");
  scanf("%d",num1);
  printf("enter the denominator value: ");
  scanf("%d",den1);
  printf("enter the numerator value: ");
  scanf("%d",num2);
  printf("enter the denominator value: ");
  scanf("%d",den2);
}
void add(int num1,int den1,int num2,int den2,int *num3,int *den3)
{
  if(den1==den2)
  {
    *num3=num1+num2;
    *den3=den1;
  }
  else
  {
    int i,gcd,lcm,multi1,multi2;
    for(i=1;i<=den1 && i<=den2;i++)
      {
        if(den1%i==0 && den2%i==0)
        {
        gcd=i;
        }
      }
    lcm=(den1*den2)/gcd;
    multi1=lcm/den1;
    multi2=lcm/den2;
    *num3=(num1*multi1)+(num2*multi2);
    *den3=lcm;
  }
}
void output(int num1,int den1,int num2,int den2,int num3,int den3)
{
  printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,num3,den3);
}
void main()
{
  int a,b,c,d,e,f;
  input(&a,&b,&c,&d);
  add(a,b,c,d,&e,&f);
  output(a,b,c,d,e,f);
}
