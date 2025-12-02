#include<stdio.h>
#include<string.h>
#include<math.h>
void main (){
    int num,g,k,h,f,cube =0;
    printf("Enter the number you want to check if that's armstrong number\n");
    scanf("%d",&num);
    h=num;
    char a[100];
    sprintf(a,"%d",num);
    f=strlen(a);
    while (h>0){
    g =h%10;
        cube = cube + pow(g,f);
        h=h/10;
    }
cube == num?printf("%d is an Armstrong number ",num):  printf("%d is not an Armstrong number ",num);
}
