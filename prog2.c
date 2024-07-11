//To find the GCD of two numbers using function.
#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the 1st number:\n");
  scanf("%d",&a);
  printf("Enter the 1st number:\n");
  scanf("%d",&b);
  int gcd(int a,int b);
  int c=gcd(a,b);
  printf("The GCD is :\n%d",c);
}
int gcd(int a,int b)
{
    int min(int a,int b);
    for(int i=min(a,b);i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
            break;
        }
    }
}
int min(int a,int b)
{
    if(a<b) return a;
    else return b;
}