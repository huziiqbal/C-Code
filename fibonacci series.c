#include<stdio.h>
int fibonacci(int n){
    if (n==0){
        return 0;}
    else if (n==1){
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    }
int main (){
int a,i;
printf("Enter the number upto which you want to print the fibonacci series");
scanf("%d",&a);
for (i=0;i<=a;i++){
    printf("%d,",fibonacci(i));
}
    }

