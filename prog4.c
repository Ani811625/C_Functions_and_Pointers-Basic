//To calculate the factorial of the given number.
#include<stdio.h>
int main()
{
  int a;
  printf("Enter the 1st number:\n");
  scanf("%d",&a);
  int fact(int a);
  int c=fact(a);
  printf("The Factorial of %d is :\n%d",a,c);
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