#include <stdio.h>
// #include<string.h>
// void main(){
//     int a , b;
// char ch[12] , ggh[20];
// printf("Enter the string you want to print");
// scanf("%s",ch);
// printf("the second string is ");
// scanf("%s",ggh);
// a=strcmp(ch,ggh);
// printf("%d\n",a);
// printf("%zu" ,strcspn(ch,ggh));
// }

// Recursive Digit Manipulation
// Write a recursive function that takes an integer N and returns a new number formed by replacing every even digit with its square and leaving odd digits unchanged.
//⚠️UNSOLVED⚠️//
// int data_manipulate(int a){
//     int k;
//         if (a==0){
//             return 0;
//         }
//         else if (a!=0){
//             while (a>=0){
//             k=a%10;
//             if (k%2==0){
//                 printf("%d",k*k);
//             a=a/10;
//             if(a==0){
//                 break;
//             }}
//             else if (k%2!=0){
//                 printf("%d",k);
//                 a=a/10;
//                 if(a==0){
//                 break;}}}}}
// int reverse(int n)
//             {
//                 int r = 0;
//                 while (n > 0)
//                 {
//                     r = r * 10 + (n % 10);
//                     n = n/10;
//                 }
//                 return r;
//             }
int main(){
    int l,a ,k ;

    printf("Enter the number you want to perform this operation on : ");
    scanf("%d",&a);
    l=data_manipulate(a);

        // int l = 6548;
        // int rev = reverse(l);

        // printf("Reversed = %d", rev);
    }
//⚠️UNSOLVED⚠️//

// void main(){
//     int a,i;
//     printf("enter the number you  want to get reverse counting from\n");
//     scanf("%d",a);

// for (i=a;i>=0;i--){
//     printf("%d",i);
//     }
// }
void main(){
    int a,i;
    printf("enter the number you  want to perform this operation on :\n");
        scanf("%d",a);
        for (i=0;i<=a;i++){
            printf("%d",i+(i-1));

        }
    }
