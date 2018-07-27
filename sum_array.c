#include <stdio.h>
#include <stdlib.h>
#define LEN 100

int sum_array(int a[], int n){
int i,sum=0;
for(i=0; i<n; i++){
printf("input number %d:",i+1);  //function definition
scanf("%d",&a[i]);
sum += a[i];
}
return sum;
}

int main(){
printf("program name:ARRAY SUM\nfunction:sums all elements in an array\nwritten by:sphinx\n");

int b[LEN],j,k,total;
printf("\n\nhow many elements in the array:");  /*main function*/
scanf("%d",&j);

total = sum_array(b,j); /*function call*/

printf("\nthe sum of the array is %d\n",total);

printf("\n\nEND OF PROGRAM\n");

return 0;

}
