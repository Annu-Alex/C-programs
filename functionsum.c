#include<stdio.h>
int f(int);
int main()
{
 int factorial,a;
 factorial=f(a);
 printf("The factorial is %d",factorial);
 return 0;
 }
 int f(int a)
 {
  int fact=1,i;
  printf("Enter the number");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
   {
     fact=fact*i;
    }
    return fact;
 }   
 
