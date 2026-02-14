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
// int data_manipulate(int a){
//     int k;
//         if (a==0){
//             return 0;
//         }
//         else if (a!=0){
//             while (a>=0){
//             k=a%10;
//             if (k%2==0){
//                 // printf("%d",k*k);
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
// int main(){
//     int l,a ,k ;

//     printf("Enter the number you want to perform this operation on : ");
//     scanf("%d",&a);
//     // l=data_manipulate(a);

//         // int l = 6548;
//         int rev = reverse(a);

//         printf("Reversed = %d", rev);
// }
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
// //    return k ;
// //  }
// //   int largestdigit(int n){
// //      int k,max=0;
// //      while (n>0){
// //          k=n%10;
// //          if (k>max){
// //              max=k;}
// //              n=n/10;}
// //      return max;
// //  }
// //  void main(){
// //      int a,b;
// //       printf("Enter number: ");
// //     scanf("%d", &a);
// //     printf("Enter what you want to know about the number\n1 for sum of digits of the entered number\n2 for counting the number of digits in that number\n3 for finding the largest digit in the number  provided\n");
// //     scanf("%d",&b);
// // //     switch(b){
// // //         case 1:
// // //         printf("The sum of digits of the number you provided is %d",sum(a));
// // //         break;
// // //         case 2 :
// // //         printf("The number of digits in number provided number is %d",num(a));
// // //         case 3 :
// // //         printf("The largest digit from in the number provided is %d",largestdigit(a));
// // //     }
// // // }

// // //arrays
// // void main(){
// //     int i,k,even=0,odd=0;
// //     int marks [] = {25,22,56,26,30,58,19};
// //     k= sizeof(marks) / sizeof(marks[0]);
// //     for (i=0;i<=k;i++){
// //         if (marks[i]%2 == 0){
// //             even = even +1;
// //             }
// //         if (marks[i]%2 != 0){
// //             odd = odd +1;
// //         }
// //  }
// //     printf("The number of even digits in array is %d\n",even);
// //     printf("The number of odd digits in array is %d",odd);
// // }

// // // calculating and printing the sum of rows and column in a matrix
// // void main(){
// //     int k,i,h,r1=0,r2=0,c1=0,c2=0,c3=0,c4=0;
// // int marks [4][4]= {{25,22,56,19},{52,44,55,12}};
// //      k= sizeof(marks) / sizeof(marks[0]);
// //     for (i=0;i<k;i++){
// //          r1 = marks[0][i]+r1;
// //          r2 = r2+marks[1][i];}
// //     for (h=0;h<2;h++){
// //         c1=c1+marks[h][0];
// //         c2=c2+marks[h][1];
// //         c3=c3+marks[h][2];
// //         c4=c4+marks[h][3];}
// //     printf("The sum of elements of row 1 is the matrix is %d\n",r1);
// //     printf("The sum of elements of row 2 is the matrix is %d\n",r2);
// //     printf("The sum of elements of column 1 is the matrix is %d\n",c1);
// //     printf("The sum of elements of column 2 is the matrix is %d\n",c2);
// //     printf("The sum of elements of column 3 is the matrix is %d\n",c3);
// //     printf("The sum of elements of column 4 is the matrix is %d\n",c4);
// //  }
// // //2nd method : generalized form of above:
// // void main(){
// //     int h,t, r , sum=0,c;
// //     printf("Enter rows and column of your matrix :\n");
// //     scanf("%d %d",&r,&c);
// //     printf("Enter the elements of your matrix row wise :\n");
// //     int matrix[r][c];
// //     for (h=0;h<r;h++){
// //         for (t=0;t<c;t++){
// //             scanf("%d",&matrix[h][t]);}}
// //             printf("The matrix you gave is :\n");
// //         for (h=0;h<r;h++){
// //         for (t=0;t<c;t++){
// //            printf(" %d ",matrix[h][t]);
// //             } printf("\n");}
// //         for (h=0;h<r;h++){
// //             sum =0;
// //         for (t=0;t<c;t++){
// //             sum = sum+ matrix[h][t];
// // }

// //     printf("The sum of elements of row %d is %d\n",h+1,sum);
// // }}

// // // finding the largest element of a matrix's row of column
// // void main(){
// //     int h,t,r,c,max=0;
// //     printf("Enter rows and column of your matrix :\n");
// //     scanf("%d %d",&r,&c);
// //     printf("Enter the elements of your matrix column wise :\n");
// //     int matrix[r][c];
// //     for (h=0;h<r;h++){
// // //         for (t=0;t<c;t++){
// // //             scanf("%d",&matrix[h][t]);
// // //         }}
// // //     printf("The matrix you gave is :\n");
// // //      for (t=0;t<c;t++){
// // //         for (h=0;h<r;h++){
// // //             printf(" %d ",matrix[h][t]);}
// // //             printf("\n");
// // //      }
// // //         for (h=0;h<r;h++){
// // //             max=0;
// // //         for (t=0;t<c;t++){
// // //             if (max<matrix[h][t]){
// // //             max = matrix[h][t];
// // // }}

// // //     printf("The largest element of column %d is %d\n",h+1,max);
// // // }}

// // void main (){
// //     int i,pass=6645,entered ;
// //     printf("Enter you ATM PIN\nYou have 3 attempts to enter yor corect pin\n");
// //     printf("Enter you ATM PIN ");
// //     scanf ("%d",&entered);
// //     for (i=0;i<4;i++){
// //         if (pass == entered){
// //         printf("You entered correct pin");
// //             break;}
// //         else {
// //            printf("you entered wrong pin,\n");
// //            printf("You have %d attempts left to enter yor corect pin\n",(3-i));
// //     printf("Enter you ATM PIN ");
// //     scanf ("%d",&entered); }}}
// // // same code as above but with while loop
// // void main (){
// // int i=0,pass=6645,entered ;
// //     printf("Enter you ATM PIN\nYou have 3 attempts to enter yor corect pin\n");
// //     printf("Enter you ATM PIN ");
// //     scanf ("%d",&entered);
// //     while (i<4){
// //         if (pass == entered){
// //         printf("You entered correct pin");
// //             break;}
// //         else {
// //            printf("you entered wrong pin,\n");
// //            printf("Now you have %d attempts left to enter yor corect pin\n",(2-i));
// //            i=i+1;
// //     printf("Enter you ATM PIN ");
// //     scanf ("%d",&entered); }}}
// // DATE - 19/11/2025
// void main (){
//     int num,g,a,k, evev =0, ode=0, even [100] , odd[1100] ,count =0, reversed;
//     printf("Enter the number you want to reverse\n");
//     scanf("%d",&num);
//     a = num ;
//     // while (a>0){
//     // k = a%10;
//     //     printf("%d",k);
//     //     a =a/10;
//     //     reversed = reversed * 10 + k;}
//     // if (num == reversed){
//     //     printf("\nThe number is pelindrome");}
//     // else {
//     //     printf("The number is not pelindrome");
//     // }
//     while (a>0){
//     g =a%10;
// //     if (g%2==0)
// //     {even [evev++]=g;}
// //     else if (g%2!= 0 )
// //     {odd[ode++]  =  g;}
// //         a=a/10;
// //     }
// // for (int i = evev - 1; i >= 0; i--)
// //     printf("%d", even[i]);

// // for (int i = ode - 1; i >= 0; i--)
// //     printf("%d", odd[i]);

// // }
// // odd even sorter
// // void main ()
// // {
// //     int num,g,a,k,i, evev =0, ode=0, even [100] , odd[1100] ,count =0, reversed;
// //     printf("Enter the number you want to reverse\n");
// //     scanf("%d",&num);
// //     a = num ;
// //     while (a>0){
// //     g =a%10;
// //     if (g%2==0)
// //     {even [evev++]=g;}
// // //     else if (g%2!= 0 )
// // //     {odd[ode++] = g;}
// // //         a=a/10;
// // //      }
// // //     printf("The even digits are :\n");
// // // for (i = evev - 1; i >= 0; i--){
// // //     printf("%d", even[i]);}
// // //     printf("\n");
// // //     printf("The odd digits are :\n");
// // // for (int i = ode - 1; i >= 0; i--){
// // //     printf("%d", odd[i]);}
// // // }
#include <stdio.h>

// int factorial(int n) {
//     if (n == 0)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }

// int main() {
//     int num ;
//     printf("enter the number you want the factorial of :");
//     scanf("%d",&num);
//     printf("Factorial of %d = %d\n", num, factorial(num));
//     printf("Hence the value of %d! = %d",num,factorial(num));

//     return 0;
// }
/*
2nd logic of factorial
#include<stdio.h>
int factorial(int n) {
    int fac = 1 ;
    while (n>0){
        fac = fac * n ;
        n--;
    }
    return fac;
}

int main() {
    int num ;
    printf("Enter the number you want the factorial of :");
    scanf("%d",&num);
    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}*/
// // // function to find the square and cube of a number
// int cube_square(int n){
//     printf("The square of %d is : %d\n",n,n*n);
//     printf("The cube of %d is : %d\n",n,n*n*n);
// }
// int main(){
//     int n ;
//     printf("Enter the number you want to find square and cube of:");
//     scanf("%d",&n);
//     cube_square(n);
//     return 0 ;
// }
// // // function that takes 2 integers and return the greater integer
// int greater(int a,int b ){
//     if (a>b){
//         printf("\nThe number %d is greater than %d",a,b);}
//     else if (b>a){
//         printf("\nThe number %d is greater than %d", b,a);}
//     else if (b==a){
//         printf("\nBoth the numbers you entered are equal");
//     }
//     }
// int main(){

//     int a,b;
//     printf("Enter the first number:");
//     scanf("%d",&a);
//     printf("enter the second number:");
//     scanf("%d",&b);
//     greater(a,b);
// }
// // // functioin inside function
// // // program that find the sum of digits of the factorial of a given number using functions
// int k ;
// int factorial(int n)

// { if (n == 0){
//     return 1 ;

// } else
//       return n * factorial(n - 1);
// }

// int main()
// {
//     int b;
//     printf("Enter the number");
//     scanf("%d", &b);
//     printf("The factorial of %d is %d", b, factorial(b));

// }
// date=8/11/2025
// void main (){
//     int a;
//     printf("enter your marks");
//     scanf("%d",&a);
//     if (a>40){
//         printf("you are passed, GOOD BOY");}
//         else {
//             printf("you are fail;");
//         }
//     }
// // date=8/11/2025
// int main()
// {
//     int unit;
//     printf("Enter your number of units of elctricity used by you :");
//     scanf("%d", &unit);
//     if (unit <= 50)
//     {
//         printf("The charges for %d units of  elctricity is Rs.%d", unit ,2 * unit);
//     }
//     else if (unit <= 100)
//     {
//         printf("The charges for %d units of  electricity is Rs.%d" , unit ,3 * unit);
//     }
//     else if (unit <= 200)
//     {
//         printf("The charges for %d units of  electricity is Rs.%d",unit , 5 * unit);
//     }
//     else if (unit > 200)
//     {
//         printf("The charges for %d units of  electricity is Rs.%d",unit , 8 * unit);
//     }

//     return 0;
// }

// // date=12/11/2025
// void main (){
//     int a;
//     float fine;
//     printf("Enter the number of days in which you returned the book");
//     scanf("%d",&a);
//     if (a <=7){
//         fine = 0;
//         printf("there is no fine ");}
//     else if (a<=15){
//         printf("the total fine of yours is %d",(a-7)*2);}
//     else if (a>15){
//         printf("The total fine of yours is %d",(15-7)*2+(a-15)*5);}
// }
// date = 12/11/2025
// void main(){
// int b, grad  ;
// printf("Enter your age :");
// scanf("%d",&b);
// if (b>=21){
//     printf("your passes the age criteria.\n");
//     printf("Enter your graduation status\nEnter 1  if you are graduated \nEnter 0 if you are not graduated\n");
//     scanf(" %d",&grad);
//     if (grad == 1){
//         printf("you are eligible for the job");
//     }
//     else if (grad == 0) {
//         printf("you are not eligible ");
//     }
// }
// else {
//     printf("your are ineligible for this job due to your age");
// }
// }

// // method 2 of the above ques
// #include<string.h>
// void main(){
//     int age , result ;char word[10],gr[10] = "grad";
//     printf("Enter your age:");
//     scanf("%d",&age);
//     if(age >= 21)
//     {
//         printf("If you are garduated type 'gard'\nIf you are not graduated type 'non'\n");
//         scanf("%s",&word);
//         result = strcmp(word ,gr);
//         if(result == 0)
//         {
//             printf("Your are elligible for job\n");
//         }
//         else{
//             printf("You are not elligible for job because you are not graduated .\n");
//         }
//     }
//     else{
//         printf("You are not elligible for this job because of your age\n");    }
// }

// // #date = 12/11/2025
// void main (){
// int day ;
// printf("enter the number of day ");
// scanf("%d",&day);
// switch (day){
//     case 1 :
//     printf("sunday");
//     break;
//     case 2 :
//     printf("monday");
//     break;
//     case 3 :
//     printf("tuesday");
//     break;
//     case 4 :
//     printf("wednesday");
//     break;
//     case 5 :
//      printf("thursday");
//     break;
//     case 6 :
//     printf("friday");
//     break;
//     case 7 :
//     printf("saturday");
//     break;
//     default :
//     printf("there are only 7 days in a week");
// }
// }
// date = 15-11-2025
// reverse counting
// void main(){
//     int a,i;
//     printf("enter the number you  want to get reverse counting from\n");
//     scanf("%d",&a);

// for (i=a;i>=0;i--){
//     printf("%d,",i);
//     }
// }

//multiplication table of n variable
//DATE = 15-11-2025
// int main(){
//     int i,a;
//     printf("enter the number you want table of:");
//     scanf("%d", &a);
//     for (i = 1; i <= 10; i++)
//     {
//         printf("%d x %d = %d\n ", a, i, a * i);
//     }
//     return 0;
// }
// DATE = 15-11-2025
// void main(){
//      int i,a,sum=0;
//     printf("enter the number whose succesive digits sum you want :");
//     scanf("%d", &a);
//     for (i=1;i<=a;i++){
//         sum = sum+i;
//     }
//     printf("sum = %d",sum);
// }

// // rectangle and square  star pattern
// // date = 29/11/2025
// void  main (){
//     int a,b,i,j;
//     printf("enter the number of stars in square ");
//     scanf("%d",&a);
//     for (i=0;i<a;i++){
//         for (j=0;j<a;j++){
//             printf(" * ");
//         }
//         printf("\n");
//     }

// printf("enter the width of star rectangle");
// scanf("%d",&a);
// printf("enter the length of star rectangle");
// scanf("%d",&b);
// for (i=0;i<b;i++){
//         for (j=0;j<a;j++){
//             printf(" * ");}
//         printf("\n");
//     }
// }
// // diamond pattern
// // date = 29/11/2025
// void main(){
// int a,i,n,h,j,spaces,stars;
// printf("Enter the number of rows of star pyramid you want to print : ");
// scanf("%d",&a);
// for (n=1;n<=a;n++){
//         stars=2*n-1;
//         spaces=a-n;
//     for (h=1;h<=spaces;h++){
//             printf(" ");}
//     for (j=1;j<=stars;j++){
//                 printf("*");}
//                 printf("\n");
//             }
//     for (i=a;i>0;i--){
//         stars=2*i-4;
//         spaces=a-i;
//     for (h=0;h<=spaces;h++){
//             printf(" ");}
//     for (j=0;j<=stars;j++){
//                 printf("*");}
//                 printf("\n");
//             }
//         }

// // rectangle perimeter stars
// // date = 29/11/2025
// void main(){
//     int col ,row;
//     printf("Enter the Length and Breadth of rectangle ");
//     scanf("%d , %d",&row ,&col);

//     for(int i = 1; i <= row; i++ )
//     {
//         for(int j = 1;j<= col;j++){
//             if(i == 1 || i == row || j == 1 || j == col){
//                 printf(" * ");
//             }
//             else{
//                 printf("   ");}
//         }

//         printf("\n");
//     }
// }
// // // // Armstrong Number//
// // void main (){
// //     int num,g,a,k,i, ode=0, odd[1100], sum =0,cube =0;
// //     k= sizeof(num);
// //     printf("Enter the number you want to check if that's armstrong number\n");
// //     scanf("%d",&num);
// //     a = num ;
// //     while (a>0){
// //     g =a%10;
// //         cube = cube + (g*g*g);
// //         a=a/10;
// //     }
// // printf("the sum of cube of each digit of the give number is = %d\n",cube);
// // if (cube == num ){
// //     printf("The given number %d is Armstrong numbe ",num);
// // }
// // else if (cube != num){
// //     printf("The given number %d is not an Armstrong number ",num);//eg 370
// // }
// // }
// // // factorial of number
// // factorial(int a){
// //     if (a==0){
// //         return 0;
// //     }
// //     else if (a==1){
// //         return 1;
// //     }
// //     else {
// //         return a * factorial(a-1);
// //     }
// // } int
// // void main(){
// //     int n;
// //     printf("Enter the number you want factorial of ");
// //     scanf("%d",&n);
// //     printf("The factorial of %d is %d",n,factorial(n));
// // }
// // // digits counter
// // int count(int a){
// // int k , num = 0 ;
// //     while (a>0){
// //         k = a%10;
// //         num = num +1;
// //         a=a/10;
// //     }
// //     return num;
// // }
// // void main (){
// //     int a;
// //     printf("Enter the numbner you want to count digits of");
// //     scanf("%d",&a);
// //     printf("The number of digits in %d is %d",a,count(a));
// // }

// // // prime number finder
// #include <math.h>
// void main(){
//     int k,i=2,a,pr=0,np=0;
//     printf("Enter the number you want to check : ");
//     scanf("%d",&a);
//     k=sqrt(a)+10;
//     while (i<k){
//         if (a%i==0)
//         { if (a==2){
//                 pr = pr+1;
//             }
//             else {
//             np = np+1;}
//         }
//         else if ((a%i)!= 0){
//           pr=pr+1;
// }
//          i=i+1;
// }
//     if (np>0){
//         printf("THE NUMBER IS NOT PRIME");
//     }
//     else {
//         printf("THE NUMBER IS PRIME");
//     }
// }
// // void main(){
// //      int k,a,sum=0;
// //     printf("enter the number whose succesive digits sum you want :");
// //     scanf("%d", &a);
// //     while (a>0){
// //         k=a%10;
// //         sum = sum + k;
// //         a=a/10;
// //     }
// //     printf("sum = %d",sum);
// // }

// // int factorial(int a){
// //     if (a==0){
// //         return 1;
// //     }
// //     else if (a==1){
// //         return 1;
// //     }
// //     else {
// //         return a * factorial(a-1);
// //     }
// // }
// //  void main(){
// //     int n;
// //     printf("Enter the number you want factorial of ");
// //     scanf("%d",&n);
// //     printf("The factorial of %d is %d",n,factorial(n));
// // }

// // void main (){
// //     int i=1,n,fact=1;
// //     printf("Enter the number you want factorial of ");
// //     scanf("%d",&n);
// //     for (i=1;i<=n;i++){
// //         fact = fact * i;
// //     }
//     // while (i>=n){
//     //     fact =((fact * i) + (fact));
//     //     i= i+1;

//     // }
//     // printf("The factorial of %d is %d",n,fact);
// // }
// int main(){

//     int a,b,i,c, greater =0 , smaller =0;
//     printf("Enter the number:");
//     scanf("%d",&a);
//     for (i=0;i<=a;i++){
//         c=a%10;
//         if (c>i){
//             greater = c;
//         }
//     }
//     while (a>0){
//         b=a%10;
//         if (b>0){
//             smaller = b;
//         }
//         a=a/10;
//     }
//     printf("THe smallest number is %d \n",smaller);
//     printf("THe greatest  number is %d ",greater);
// }
// // date = 28/11/2025
// //Square numbers sequence , 1^2,2^2,3^2,4^2,...,n^2
// int main() {
//     int a,i,sum=0;
// printf("enter the numbeer till you want the sum of series : ");
// scanf("%d",&a);
// if (a==1){
//     return 1;}
// else {
//         for (i=0;i<=a;i++){
//             sum = sum + (i*i);
//         }
//     }
// printf("the sum of the series's digits till %d is %d",a,sum);
// }

// //date = 28/11/2025
// //0/0!​,1/1!​,2/2!​,...n/(n−1)!1

// #include <stdio.h>
// int factorial(int a){
//     if (a==0){
//         return 1;
//     }
//     else if (a==1){
//         return 1;
//     }
//     else {
//         return a * factorial(a-1);
//     }
// }
// int main() {
//     int a,i;
//     float sum=0;
// printf("enter the numbeer till you want the sum of series : ");
// scanf("%d",&a);
//         for (i=1;i<=a;i++){
//             sum = sum + 1.0/factorial(i-1);
//     }
// printf("the sum of the series's digits till %d is %f",a,sum);
// }
// // date = 28/11/2025
// // invert any given array
// void main (){
//     int a,b,c,i;

//     printf("enter the number of elements in the array");
//     scanf("%d",&a);
//     int array[a];
//     for (i=0;i<a;i++){
//     scanf("%d",&array[i]);}
//     printf("the array you gave is ");
//     for(b=0;b<a;b++){
//         printf("%d",array[b]);
//     }
//     printf("\n");
//      printf("the inverted version of your is ");
//     for(c=(a-1);c>=0;c--){
//         printf("%d",array[c]);
// }}
// insertion in array
// DATE = 21/12/2025
// #include<stdio.h>
// int main (){
//     int n,l,a;
//     int arr[100];
//     printf("Enter the length of array: ");
//     scanf("%d",&l);
//     printf("Enter the number of element which you want to modify : ");
//     scanf("%d",&n);
//     printf("Enter the element which you want to insert : ");
//     scanf("%d",&a);
//     for (int i =0 ; i<l;i++){
//         scanf("%d",&arr[i]);
//     }
//     for (int i =0 ; i<l;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     for (int i = l; i>=n;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[n-1]=a;
//     for (int i =0 ; i<=l;i++){
//         printf("%d ",arr[i]);
//     }
// }
// //  largest digit from an integer array
// void main (){
//     int a,b,i,largest=0,smallest=0;

//     printf("enter the number of elements in the array");
//     scanf("%d",&a);
//     int array[a];
//     for (i=0;i<a;i++){
//     scanf("%d",&array[i]);
//         if(array[i]>largest){
//             largest=array[i];
//         }
//     }
//     printf("the largest digit in the array is %d",largest);
// }
// // smallest and largest digit in array
// void main (){
//     int a,b,c,i,largest=0;

//     printf("enter the number of elements in the array");
//     scanf("%d",&a);
//     int array[a];
//     for (i=0;i<a;i++){
//     scanf("%d",&array[i]);
//         if(array[i]>largest){
//             largest=array[i];
//         }
//     }
//     int smallest=array[0];
//     for (c=1;c<a;c++){
//     if (array[c]<smallest){
//         smallest=array[c];
//     }}
//     printf("the largest digit in the array is %d\n",largest);
//     printf("the smallest digit in the array is %d",smallest);
// }

// perfect squares till N
// squares till the square of N
// // date = 2/12/2025
// void main()
// {
//     int num, i, ind = 0;
//     printf("Enter the number till which you want perfect square series \n");
//     scanf("%d", &num);
//     int arr[num];
//     printf("The perfect squares till %d are ", num * num);
//     for (i = 0; i <= num; i++)
//     {
//         arr[i] = i * i;
//         printf("%d ", arr[i]);
//     }
// }
// // 2nd version of perfect squares till N
// // squares till N
// // date = 2/12/2025
// void main()
// {
//     int num, i, ind = 0;
//     printf("Enter the number till which you want perfect square series \n");
//     scanf("%d", &num);
//     int arr[num];
//     printf("The perfect squares till %d are ", num * num);
//     for (i = 0; i <= num; i++)
//     {
//         if (i * i <= num)
//         {
//             arr[i] = i * i;
//             printf("%d ", arr[i]);
//         }
//     }
// }
// date = 3/12/2025
// array operations
// void main (){
//     int a,i,b;
//     printf("enter the length of array you want to print");
//     scanf("%d",&a);
//     int arr[a];
//     for (i=0;i<a;i++){
//     scanf("%d",&arr[i]);}
//     printf("your array is :");
//       for (i=0;i<a;i++){
//     printf(" %d ",arr[i]);
// }
// int largest=0;
// for (i=0;i<a;i++){
//     if (arr[i]>largest){
//         largest =  arr[i];
//     }}
// printf("\nThe largest element in the array is %d",largest);

// printf("\nEnter the element you want to check\n");
// scanf("%d",&b);
// int tr=0;
// for (i=0;i<a;i++){
// if (arr[i]==b){
//     tr=tr+1;
// }}
// if (tr>0){
//     printf("YES! %d is present in the list",b);
// }
// else {
//     printf("NO! %d is not present in the list",b);
// }
// }

//  void main(){
//     int h,r;
//     int array[r];
//     printf("Enter the elenments  of your array :\n");
//     scanf("%d",&r);
//     printf("Enter the elements of your array:\n");
//     for (h=0;h<r;h++){
//             scanf("%d",&array[h]);
//         }
//           printf(" Your array is \n");
//         for (h=0;h<r;h++){
//             printf(" %d ",array[h]);}
//             printf(" \n ");
//         printf("Your reversed array is \n");
//         for (h=(r-1);h>=0;h--){
//             printf(" %d ",array[h]);}
//      }


// // date = 14/12/2025
// // sum of elements of matrix but if any element is zero it skip the one element below it (same column , next row)
// #include<stdio.h>
// void main (){
//     int r , c , i ,j,k,m,sum=0;
//     printf("enter the order of your matrix: ");
//     scanf("%d%d",&r,&c);
//     printf("enter the elements if your matrix row wise: ");
//     int matrix[r][c];
//     for (i=1;i<=r;i++){
//         for(j=1;j<=c;j++){
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     printf("The matrix is: \n");
//      for (k=1;k<=r;k++){
//         for(m=1;m<=c;m++){
//             printf(" %d ",matrix[k][m]);
//             if (matrix[k][m]==0){
//                 if (k==r){
//                     sum = sum;
//                 }
//                 else {
//                 sum =sum-matrix[k+1][m];}

//             }
//             sum = sum+matrix[k][m];
//         }
//          printf("\n");
//     }
//     printf("The sum of elements is %d",sum);
// }
// //MINE GAME
// #include <stdio.h>
// void main (){
//     int points=0,i,k,a,b;
// char arr[5][5] = {
//     {'*','.','*','.','.'},
//     {'.','.','.','.','.'},
//     {'*','.','*','*','*'},
//     {'.','.','.','*','*'},
//     {'*','.','*','*','.'}
// };
//     do {
//         printf("Enter your guess by row and column number: \n");
//         scanf("%d%d",&a,&b);
//         if (arr[a-1][b-1]!='*'){
//             points=points+1;
//             printf("There was no landmine\n");
//             printf("+1 Point\n");
//         }
//         else if (arr[a-1][b-1]=='*'){
//             printf("You stepped on landmine\n");
//             printf("Game Over!\n");}
//         } while (arr[a-1][b-1]!='*');
//         printf("Your Total points are : %d",points);
//     }

// // QUES 1 :
// // reducing to 1
// #include<stdio.h>
// int main (){
//     int num, steps=0;
// printf("Enterthe number: ");
// scanf("%d",&num);
// if (num%2==0){
//     do {
//         num=num/2;
//         steps=steps+1;
//     }while (num>1);
// }
// else {
//     num = num+1;
//     steps =1;
//     do{
//         num=num/2;
//         steps = steps+1;
//     }while(num>1);
// }
//     printf("The number of steps is: %d",steps);
// }
// QUES 2:
// bus number founder
#include<stdio.h>
int main (){
    int num,max,tr=0,ind;
    printf("Enter the number of elements in array: ");
    scanf("%d",&max);
    int arr[max];
    printf("Enter the bus numbers array: ");
    for(int i=0;i<max;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the bus number to be searched: ");
    scanf("%d",&num);
    printf("The sorted array: ");
    for (int i=0;i<max;i++){
        for (int j=0;j<max - (i - 1);j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int j =0 ; j<max;j++){
        printf("%d ",arr[j]);
    }
    for(int i =0;i<max;i++){
        if(arr[i]==num){
            tr = tr+1;
            ind = i;
        }
    }
    printf("\n");
    if (tr>0){
        printf("Bus number is found at index %d ",ind);
    }
        else {
            printf("Bus number is not found");
        }
}

// QUES
// step by step array sorting
#include<stdio.h>
int main (){
    int n,max,temp,pass=0;
    printf("Enter the number of elements in that array: ");
    scanf("%d",&n);
    int arr[n];
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
    for (int i = 0; i <=max; i++) {
        for (int j = 0; j <n - (i - 1); j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                pass = pass + 1;
                  printf("After pass %d : ",pass);
                for (int i =0;i<n;i++){
                  printf("%d ",arr[i]);
                }
                    printf("\n");
            }
        }
    }
    if (pass == max){
        printf("Fully Sorted in given passes\n");
    }
    else if (pass < max){
        printf("Early Termination\n");
    }
    else {
    printf("Not sorted in given passes allowed\n");
    }
    printf("The Final sorted array is :");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
}

// array pelindrome
#include <stdio.h>

int main()
{
	int pelindrome = 0;
	int arr[] = {1,2,3,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	for (int i=0 ; i<n/2 ; i++) {
		if (arr[i]==arr[n-i-1]) {
			pelindrome=pelindrome+1;
		}
	}
	if (pelindrome==n/2){
	    printf("The array is pelindrome");
	}
	else{
	    printf("The array is not pelindrome");
	}


	return 0;
}


// reversed array
#include <stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	for (int i =0 ; i<n/2 ; i++){
	    int temp = arr[i];
	    arr[i]= arr[n-i-1];
	    arr[n-i-1] = temp;
	}
	printf("Reversed array is: \n");
      for (int i=0 ;i<n;i++){
        printf("%d ",arr[i]);
    }

	return 0;
}

// MISSING NUMBER FROM ARRAY
#include <stdio.h>
int main()
{
	int arr[] = {1,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum =  (n+1)*(n+2)/2;
	int sum2 =0;
	for (int i =0 ; i<n;i++){
	    sum2 = sum2 + arr[i];
	}
	printf("The missing number is %d", sum - sum2);

	return 0;
}

// MORE THAN 1 ENTRY MISSIN FROM ARRAY
#include <stdio.h>

int main()
{
	int max =0 ;
	int arr[] = {1,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	for (int i =0 ; i < n ; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("The missing entries are :");
	for (int j =1 ; j<=max ; j++) {
		int found =0;
		for (int i =0 ; i < n ; i ++) {
			if (arr[i]==j) {
				found = 1;
				break;
			}
		}
		if (found == 0 ) {
			printf(" %d",j);
		}
	}
	return 0;
}

