//To calculate the permutation using function.
#include<stdio.h>
int main()
{
  int n,r;
  printf("Enter the value of n:\n");
  scanf("%d",&n);
  printf("Enter the value of r:\n");
  scanf("%d",&r);
  int permutation(int n);
  int c= permutation(n)/permutation(n-r);
  printf("The Output is :\n%d",c);
}
int permutation(int n)
{
    int fact=1;
  for(int i=1;i<=n;i++)
  {
     fact=fact*i;
  }
  return fact;
}