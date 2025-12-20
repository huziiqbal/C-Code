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
// int fib(int *p){
//     if (*p == 0 ){
//         return 0;
//     }
//     else if (*p ==1){
//         return 1;
//     }
//     else {
//         int ones = *p-1;
//         int twos = *p-2;
//         return fib(&ones)+fib(&twos);
//     }
// }
// int main(){
//     int num;
//     printf("Enter the value of number upto which you want to print the fibonacci series: ");
//     scanf("%d",&num);
//     printf("The fibonacci till series %d is:",num);
//     for (int i=0;i<=num;i++){
//     printf(" %d",fib(&i));
//     }
// }
// // array sorting
#include<stdio.h>
int main (){
    int n,max,temp;
    int arr[n];
    printf("Enter the number of elements in that array: ");
    scanf("%d",&n);
    printf("Enter the max number of passes allowed: ");
    scanf("%d",&max);
    printf("Enter the elements of your array :\n");
    for (int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    printf("Original array: ");
    for (int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
      for (int i = 1; i <= max; i++) {
        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
    }}
    printf("After pass %d: ",i);
         for (int i=0;i<n;i++){
        printf("%d ",arr[i]);}
            printf("\n");}
    int sorted =0, not_sorted=0;
    for (int i =0 ;i<n;i++){
        if (arr[i]<arr[i+1]){
            sorted = sorted+1;
        }
        else {
            not_sorted = not_sorted +1;
        }
    }
    if (sorted>0){
        printf("The array is fully sorted");
    }
    else if(not_sorted>0){
        printf("The array is not sorted");
    }
}
