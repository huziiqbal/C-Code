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
    printf("the len of the number is %d\n",f);
    while (h>0){
    g =h%10;
        cube = cube + pow(g,f);
        h=h/10;
    }
printf("the sum of cube of each digit of the give number is = %d\n",cube);
if (cube == num ){
    printf("The given number %d is Armstrong numbe ",num);
}
else if (cube != num){
    printf("The given number %d is not an Armstrong number ",num);//eg 370,1634
}
}
