// #include<stdio.h>
// int fact(int *p){
//     if (*p==0 || *p ==1){
//         return 1;
//     }
//     int a = *p -1;
//     return *p  * fact(&a);
// }
// int main (){
//     int num;
//     printf("Enter the number you want the factorial of:");
//     scanf("%d",&num);
//     int *ptr =&num;
//     printf("The factorial of %d is %d",*ptr,fact(&num));
// }
int fib(int *p){
    if (*p == 0 ){
        return 0;
    }
    else if (*p ==1){
        return 1;
    }
    else {
        int ones = *p-1;
        int twos = *p-2;
        return fib(&ones)+fib(&twos);
    }
}
int main(){
    int num;
    printf("Enter the value of number upto which you want to print the fibonacci series: ");
    scanf("%d",&num);
    printf("The fibonacci till series %d is:",num);
    for (int i=0;i<=num;i++){
    printf(" %d",fib(&i));
    }
}

