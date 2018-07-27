/* PROGRAM NAME:BIFF FILTER
   PURPOSE:TRANSLATES REGULAR TEXT TO BIFF LINGUA
   WRITTEN BY:SPHINX
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void){
char ch[50];
int i = 0;
printf("enter message:");
scanf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c"
,&ch[0],&ch[1],&ch[2],&ch[3],&ch[4],&ch[5],&ch[6],&ch[7],&ch[8],&ch[9],&ch[10],&ch[11],&ch[12]
,&ch[13],&ch[14],&ch[15],&ch[16],&ch[17],&ch[18],&ch[19]
,&ch[20],&ch[21],&ch[22],&ch[23],&ch[24],&ch[25],&ch[26],&ch[27]
,&ch[28],&ch[29],&ch[30],&ch[31],&ch[32],&ch[33],&ch[34],&ch[35]
);

for(i=0; i<50; i++){
ch[i]=toupper(ch[i]);  /*converts message to upper case letters*/

if(ch[i] == 'E')
ch[i] ='3';
else if(ch[i] == 'I')
ch[i] = '1';
else if(ch[i] == 'O')
ch[i] = '0';
else if(ch[i] == 'S')
ch[i] = '5';
}

printf("\nin B1FF-speak:%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n"
,ch[0],ch[1],ch[2],ch[3],ch[4],ch[5],ch[6],ch[7],ch[8],ch[9],ch[10],ch[11],ch[12]
,ch[13],ch[14],ch[15],ch[16],ch[17],ch[18],ch[19]
,ch[20],ch[21],ch[22],ch[23],ch[24],ch[25],ch[26],ch[27]
,ch[28],ch[29],ch[30],ch[31],ch[32],ch[33],ch[34],ch[35]);
return 0;
}
