// pattern 1
// half pyramid
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
// pattern 2 🔺
//date = 28/11/2025
#include<stdio.h>
void main()
{
int a,i,n,h,j,spaces,stars;
printf("Enter the number of rows of star pyramid you want to print : ");
scanf("%d",&a);
char array[a];
for (i=0;i<=a;i++){
    array[i]='*';}
for (n=1;n<a;n++){
        stars=2*n-1;
        spaces=a-n;
    for (h=1;h<=spaces;h++){
            printf(" ");}
    for (j=1;j<=stars;j++){
                printf("%c",array[0]);}
                printf("\n");
            }
        }

//pattern 2
//invereted pyramid ▽
#include <stdio.h>
int main() {
    int a,i,j,k,spaces,stars,n;
    printf("Enter the number of rows: ");
    scanf("%d",&a);

    n = (a*2) - 1;
    char array[n];
    for(i=0;i<n;i++){
        array[i] = '*';}
    for(i=a;i>=1;i--){
        spaces = a - i;
        stars= 2*i - 1;
        for(j=0;j<spaces;j++){
            printf(" ");}
        for(k=0;k<stars;k++){
            printf("%c", array[k]);}
        printf("\n");
    }
    return 0;
}
