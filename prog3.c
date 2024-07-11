//To find the LCM of two numbers using function
#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the 1st number:\n");
  scanf("%d",&a);
  printf("Enter the 1st number:\n");
  scanf("%d",&b);
  int lcm(int a,int b);
  int c=lcm(a,b);
  printf("The LCM is :\n%d",c);
}
int lcm(int a,int b)
{
    int c=a*b;
    for(int i=1;i<=c;i++)
    {
        if(i%a==0 && i%b==0)
        {
            return i;
            break;
        }
    }
}