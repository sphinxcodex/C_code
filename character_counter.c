/*program to print number of charactersa in a string*/
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
int len;
char ch;
printf("\ninput a character string:");
while(getchar() != '\n')
{
len++;
}
printf("\nthe string is %d characters long\n",len);
return 0;
}

