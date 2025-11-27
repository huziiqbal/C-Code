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
// pattern 2
//date = 28/11/2025
#include<stdio.h>
void main()
{
int a,i,n,h,j,g,k,spaces,stars;
// char ch = ' ';
printf("Enter the number of rows of star pyramid you want to print");
scanf("%d",&a);
char array[a];
for (i=0;i<a;i++){
array[i]= '*';}
for (n=1;n<=a;n++){
    spaces = a-n;
    stars=2*n - 1;
for (h=spaces;h>=0;h--){
        printf(" ");}
for (k=stars;k>=1;k--){
            printf("%c",array[0]);}

    printf("\n");
}
}
  
