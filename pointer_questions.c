#include<stdio.h>
int fact(int *p){
    if (*p==0 || *p ==1){
        return 1;
    }
    int a = *p -1;
    return *p  * fact(&a);
}
int main (){
    int num;
    printf("Enter the number you want the factorial of:");
    scanf("%d",&num);
    int *ptr =&num;
    printf("The factorial of %d is %d",*ptr,fact(&num));
}
