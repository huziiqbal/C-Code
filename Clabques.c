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
void main(){
     int i,a,sum=0;
    printf("enter the number whose succesive digits sum you want :");
    scanf("%d", &a);
    for (i=1;i<=a;i++){
        sum = sum+i;
    }
    printf("sum = %d",sum);
}

