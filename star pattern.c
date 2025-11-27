#include<stdio.h>
void main()
{
int a,i,h;
printf("Enter the number of rows of star pyramid you want to print");
scanf("%d",&a);
char array[a];
for (i=0;i<a;i++){
array[i]= '*';
for (h=(a-1);h>=0;h--){
printf("%c", array[h]);
}
printf("\n");
}}

