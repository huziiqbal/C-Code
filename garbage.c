#include <stdio.h>
#include<string.h>
void main(){
    int a;
char ch[12] , ggh[20];
printf("Enter the string you want to print");
scanf("%s",ch);
printf("the second string is ");
scanf("%s",ggh);
a=strcmp(ch,ggh);
printf("%d",a);
}
