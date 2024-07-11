#include<stdio.h>
int main()
{
  int a;
  printf("Enter the value of n:\n");
  scanf("%d",&a);
  int fibo(int a);
  for(int i=1;i<=a;i++)
  {
  int c=fibo(i);
  printf("The Factorial of %d is :\n%d\n",i,c);
  }
}
  int fibo(int a)
  {
    int b=1,c=1,sum;
    for(int i=1;i<=a;i++)
    {
        b=c;
        c=sum;
        sum=b+c;
        return sum;
    }
  }