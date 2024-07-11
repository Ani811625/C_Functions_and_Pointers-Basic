//To find the result of addition ,substraction ,multiplication and division using function. 
#include<stdio.h>
//int add(int a,int b);
int main()
{
  int a,b;
  printf("Enter the 1st number:\n");
  scanf("%d",&a);
  printf("Enter the 1st number:\n");
  scanf("%d",&b);
  int add(int a,int b);//Fnction prototype declaration
  int sub(int a,int b);//Fnction prototype declaration
  int mult(int a,int b);//Fnction prototype declaration
  int div(int a,int b);//Fnction prototype declaration
  int c=add(a,b);
  int d=sub(a,b);
  int e=mult(a,b);
  int f=div(a,b);
  printf("The result of add is:\n%d\n",c); 
  printf("The result of substract is:\n%d\n",d); 
  printf("The result of multiply is:\n%d\n",e); 
  printf("The result of division is:\n%d\n",f); 
  return 0;  
}
int add(int x,int y)
{
    int c=x+y;
    return c;
}
int sub(int a,int b)
{
    int c;
    if(a>b)
    {
         c=a-b;
    }
    else
    {
         c=b-a;
    }
    return c;
}
int mult(int a,int b)
{
    int c=a*b;
    return c;
}
int div(int a,int b)
{
    int c=a/b;
    return c;
}
/*If function prototype declaration is not used then user defined function has to be used before or above main().
But using function prototype it can be declared after the main().*/
/*Function prototype declaration can be done just after #include<stdio.h> or even inside the main() just before calling the function.*/
