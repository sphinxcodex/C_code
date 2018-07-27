/*program to print out an identity matrix*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 10
int main (void)
{
int row,col,matrix[N][N],i;

for(row=0; row<N; row++)
{
for(col=0; col<N; col++)
{
if(row == col)
matrix[row][col]=1;
else
matrix[row][col]=0;
printf("%d \t",matrix[row][col]);
}
printf("\n");
}
return 0;
}
