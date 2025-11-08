#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num ;
    printf("enter the number you want the factorial of :");
    scanf("%d",&num);
    printf("Factorial of %d = %d\n", num, factorial(num));
    printf("Hence the value of %d! = %d",num,factorial(num));

    return 0;
}

// function to find the square and cube of a number
int cube_square(int n){
    printf("The square of %d is : %d\n",n,n*n);
    printf("The cube of %d is : %d\n",n,n*n*n);
}
int main(){
    int n ;
    printf("Enter the number you want to find square and cube of:");
    scanf("%d",&n);
    cube_square(n);
    return 0 ;
}
// function that takes 2 integers and return the greater integer
int greater(int a,int b ){
    if (a>b){
        printf("\nThe number %d is greater than %d",a,b);}
    else if (b>a){
        printf("\nThe number %d is greater than %d", b,a);}
    else if (b==a){
        printf("\nBoth the numbers you entered are equal");
    }
    }
int main(){

    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    greater(a,b);
}
// functioin inside function
// program that find the sum of digits of the factorial of a given number using functions
int k ;
int factorial(int n)

{ if (n == 0){
    return 1 ;

} else
      return n * factorial(n - 1);
}

int main()
{
    int b;
    printf("Enter the number");
    scanf("%d", &b);
    printf("The factorial of %d is %d", b, factorial(b));

}

void main (){
    int a;
    printf("enter your marks");
    scanf("%d",&a);
    if (a>40){
        printf("you are passed, GOOD BOY");}
        else {
            printf("you are fail;");
        }
    }

int main()
{
    int unit;
    printf("Enter your number of units of elctricity used by you :");
    scanf("%d", &unit);
    if (unit <= 50)
    {
        printf("The charges for %d units of  elctricity is Rs.%d", unit ,2 * unit);
    }
    else if (unit <= 100)
    {
        printf("The charges for %d units of  electricity is Rs.%d" , unit ,3 * unit);
    }
    else if (unit <= 200)
    {
        printf("The charges for %d units of  electricity is Rs.%d",unit , 5 * unit);
    }
    else if (unit > 200)
    {
        printf("The charges for %d units of  electricity is Rs.%d",unit , 8 * unit);
    }

    return 0;
}
