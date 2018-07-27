#include <stdio.h>
#include <stdlib.h>
#define LEN 30
int factorial(int n)
{
  if (n <= 1)
  return 1;                   /*program recursion*/
  else
  return n * factorial(n-1);
}
int main()
{
  int i,j=0;
printf("input a number:");
scanf("%d",&i);
j = factorial(i);                  //function call
printf("the factorial is %d",j);
return 0;
}
