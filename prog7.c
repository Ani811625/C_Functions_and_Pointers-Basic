//To calculate the factorial of n numbers.
#include<stdio.h>
int main()
{
  int a;
  printf("Enter the value of n:\n");
  scanf("%d",&a);
  int fact(int a);
  for(int i=1;i<=a;i++)
  {
  int c=fact(i);
  printf("The Factorial of %d is :\n%d\n",i,c);
  }
  
}
int fact(int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}