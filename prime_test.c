#include <stdio.h>
int prime_test(int n,int i,int rem){
for(i=2; i<n; i++){
rem = n % i ;                         /*defines a function to test if a number is prime*/
if (rem == 0){
printf("\nnot a prime number\n");
n=0;
}
}
if(rem != 0)
printf("\nit's a prime !!! \n");
}
int main()
{
int i,n,rem;
printf("PROGRAM NAME:PRIME NUMBER TEST\nFUNCTION:TEST IF THE INPUT NUMBER IS PRIME OR NOT\nWRITTEN BY:SPHINX\n\n");
printf("input the number:");
scanf("%d",&n);
if(n == 1 || n == 2)
printf("its a prime");
else
prime_test(n,i,rem);
return 0;
}
