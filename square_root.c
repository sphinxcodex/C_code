#include <stdio.h>

float absolutevalue(float k)
{
if(k<0)
k = -k;
return k;
}

float square_root(float x){

if(x < 0)
{
printf("error,square root of a negative number\n");
return -1;
}
float i=1,guess=1.0;
const float epilson=0.00001;

while(absolutevalue((guess*guess) - x) >= epilson)
{
guess = ((x/guess) + guess) / 2.0;
}

return guess;
}

int main(void){
float n,k;
printf("input the number to find its square root:");
scanf("%f",&n);
printf("the square root is %.4f\n",square_root(n));
}
