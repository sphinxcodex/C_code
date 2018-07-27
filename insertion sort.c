#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,j,k,n,a;
printf("\nhow many values do you want to sort:");
scanf("%d",&a);
int x[a];
printf("\n\nInput the values you want to sort\n");
for(n=0; n<a; n++)
{
  printf("\ninput value number %d:",n+1);
    scanf("%d",&k);
    i=0;
    while(i<n && k>x[i])
    i++;
    for(j=n; j>i; j--)
    x[j]=x[j-1];
    x[i]=k;
 }
 printf("\nSORTED LIST\n\n");
 for(n=0; n<a; n++)
 {
    printf("%d,",x[n]);
 }
    printf("\n\nEND OF PROGRAM\n");
    return 0;
}
