#include <stdio.h>
int main()
{
int i,a;
a=5;
int marks[a];
printf("input the variables:");
for(i=0; i<a; i++)
{
scanf("%d",&marks[i]);
}

for(i=0; i<a; i++)
{
printf("\nthe element in %d is %d\n",i,marks[i]);
}
return 0;
}
