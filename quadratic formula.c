/*program to solve a given quadratic equation*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int a,b,c;
float d,root1,root2;
printf("PROGRAM BY SPHINX\n");
printf("FUNCTION::TO SOLVE ANY QUADRATIC EQUATION\n");
printf("input the coefficients as follows aX^2 + bX + c\n");
printf("\ninput the value of a:");
scanf("%d",&a);
printf("\ninput the value of b:");
scanf("%d",&b);
printf("\ninput the value of c:");
scanf("%d",&c);
b= (-1 * b);
d = (b*b)- (4 * a * c);
if (d<0)
printf("the equation has no roots");
else
{
d = sqrt(d);
root1= ( (b + d) / (2 * a));
root2= ( (b + d) / (2 * a));
printf("\nTHE ROOTS OF THE EQUATION ARE %.2f or %.2f\n",root1,root1);
}
return 0;
}
