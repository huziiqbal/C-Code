#include <stdio.h>
// // #include<string.h>
// // void main(){
// //     int a , b;
// // char ch[12] , ggh[20];
// // printf("Enter the string you want to print");
// // scanf("%s",ch);
// // printf("the second string is ");
// // scanf("%s",ggh);
// // a=strcmp(ch,ggh);
// // printf("%d\n",a);
// // printf("%zu" ,strcspn(ch,ggh));
// // }

// // Recursive Digit Manipulation
// // Write a recursive function that takes an integer N and returns a new number formed by replacing every even digit with its square and leaving odd digits unchanged.
// //⚠️UNSOLVED⚠️//
// // int data_manipulate(int a){
// //     int k;
// //         if (a==0){
// //             return 0;
// //         }
// //         else if (a!=0){
// //             while (a>=0){
// //             k=a%10;
// //             if (k%2==0){
// //                 printf("%d",k*k);
// //             a=a/10;
// //             if(a==0){
// //                 break;
// //             }}
// //             else if (k%2!=0){
// //                 printf("%d",k);
// //                 a=a/10;
// //                 if(a==0){
// //                 break;}}}}}
// // int reverse(int n)
// //             {
// //                 int r = 0;
// //                 while (n > 0)
// //                 {
// //                     r = r * 10 + (n % 10);
// //                     n = n/10;
// //                 }
// //                 return r;
// //             }
// // int main(){
// //     int l,a ,k ;

// //     printf("Enter the number you want to perform this operation on : ");
// //     scanf("%d",&a);
// //     l=data_manipulate(a);

//         // int l = 6548;
//         // int rev = reverse(l);

//         // printf("Reversed = %d", rev);
//     // }
// //⚠️UNSOLVED⚠️//

// // void main(){
// //     int a,i;
// //     printf("enter the number you  want to get reverse counting from\n");
// //     scanf("%d",a);

// // for (i=a;i>=0;i--){
// //     printf("%d",i);
// //     }
// // }
// void main(){
//     int a,i;
//     printf("enter the number you  want to perform this operation on :\n");
//         scanf("%d",a);
//         for (i=0;i<=a;i++){
//             printf("%d",i+(i-1));

//         }
//     }

// infinite swtich
// void main(){
//     int a;
//     while (a>0){
//         printf("Enter what you want to order according to the following menu\n1 for Coffee\n2 for Tea\n3 for cake\n4 for milk\nenter 00 when you want to finish your order\n");
//         scanf("%d",&a);
//         switch (a){
//             case 1 :
//             printf("you ordered Coffee\nPlease wait your order will be delivered shortly");
//             break;
//             case 2 :
//             printf("you ordered Tea\nPlease wait your order will be delivered shortly");
//             break;
//             case 3 :
//             printf("you ordered Cake\nPlease wait your order will be delivered shortly");
//             break;
//             case 4 :
//             printf("you ordered Milk\nPlease wait your order will be delivered shortly");
//             break;
//             case 00 :
//             printf("you finished your order \nPlease wait your order will be delivered shortly");
//             break;
//             default:
//             printf("you entered wrong input\n");
//         if (a==00){
//             break; }}}}







// int sum(int a){
//     int k,add = 0;
//     while (a>0){
//      k=a%10;
//      a=a/10;
//      add=add+k;
// }
// return add;
// }
//  int num(int n){
//     int k=0;
//     while(n>0){
//         n=n/10;
//         k=k+1;
//     }
//    return k ;
//  }
//   int largestdigit(int n){
//      int k,max=0;
//      while (n>0){
//          k=n%10;
//          if (k>max){
//              max=k;}
//              n=n/10;}
//      return max;
//  }
//  void main(){
//      int a,b;
//       printf("Enter number: ");
//     scanf("%d", &a);
//     printf("Enter what you want to know about the number\n1 for sum of digits of the entered number\n2 for counting the number of digits in that number\n3 for finding the largest digit in the number  provided\n");
//     scanf("%d",&b);
//     switch(b){
//         case 1:
//         printf("The sum of digits of the number you provided is %d",sum(a));
//         break;
//         case 2 :
//         printf("The number of digits in number provided number is %d",num(a));
//         case 3 :
//         printf("The largest digit from in the number provided is %d",largestdigit(a));
//     }
// }

//arrays
void main(){
    int i,k,even=0,odd=0;
    int marks [] = {25,22,56,26,30,58,19};
    k= sizeof(marks) / sizeof(marks[0]);
    for (i=0;i<=k;i++){
        if (marks[i]%2 == 0){
            even = even +1;
            }
        if (marks[i]%2 != 0){
            odd = odd +1;
        }
 }
    printf("The number of even digits in array is %d\n",even);
    printf("The number of odd digits in array is %d",odd);
}

// calculating and printing the sum of rows and column in a matrix
void main(){
    int k,i,h,r1=0,r2=0,c1=0,c2=0,c3=0,c4=0;
int marks [4][4]= {{25,22,56,19},{52,44,55,12}};
     k= sizeof(marks) / sizeof(marks[0]);
    for (i=0;i<k;i++){
         r1 = marks[0][i]+r1;
         r2 = r2+marks[1][i];}
    for (h=0;h<2;h++){
        c1=c1+marks[h][0];
        c2=c2+marks[h][1];
        c3=c3+marks[h][2];
        c4=c4+marks[h][3];}
    printf("The sum of elements of row 1 is the matrix is %d\n",r1);
    printf("The sum of elements of row 2 is the matrix is %d\n",r2);
    printf("The sum of elements of column 1 is the matrix is %d\n",c1);
    printf("The sum of elements of column 2 is the matrix is %d\n",c2);
    printf("The sum of elements of column 3 is the matrix is %d\n",c3);
    printf("The sum of elements of column 4 is the matrix is %d\n",c4);
 }
//2nd method : generalized form of above:
void main(){
    int h,t, r , sum=0,c;
    printf("Enter rows and column of your matrix :\n");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of your matrix row wise :\n");
    int matrix[r][c];
    for (h=0;h<r;h++){
        for (t=0;t<c;t++){
            scanf("%d",&matrix[h][t]);}}
            printf("The matrix you gave is :\n");
        for (h=0;h<r;h++){
        for (t=0;t<c;t++){
           printf(" %d ",matrix[h][t]);
            } printf("\n");}
        for (h=0;h<r;h++){
            sum =0;
        for (t=0;t<c;t++){
            sum = sum+ matrix[h][t];
}

    printf("The sum of elements of row %d is %d\n",h+1,sum);
}}

// finding the largest element of a matrix's row of column
void main(){
    int h,t,r,c,max=0;
    printf("Enter rows and column of your matrix :\n");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of your matrix column wise :\n");
    int matrix[r][c];
    for (h=0;h<r;h++){
        for (t=0;t<c;t++){
            scanf("%d",&matrix[h][t]);
        }}
    printf("The matrix you gave is :\n");
     for (t=0;t<c;t++){
        for (h=0;h<r;h++){
            printf(" %d ",matrix[h][t]);}
            printf("\n");
     }
        for (h=0;h<r;h++){
            max=0;
        for (t=0;t<c;t++){
            if (max<matrix[h][t]){
            max = matrix[h][t];
}}

    printf("The largest element of column %d is %d\n",h+1,max);
}}
