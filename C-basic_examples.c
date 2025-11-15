// mulutiplication table
// #include <stdio.h>
// int main()
// {
//     int i;
//     int a;
//     printf("enter the number you want table of");
//     scanf("%d", &a);
//     for (i = 1; i <= 10; i++)
//     {
//         printf("%d x %d = %d\n ", a, i, a * i);
//     }
//     return 0;
// }
// // #the sum off two numbers
// void main()
// {
//     int a, b, sum;
//     printf("Enter the first number ");
//     scanf("%d", &a);
//     printf("enter the second number ");
//     scanf("%d", &b);

//     sum = a + b;
//     printf("the sum of %d and %d is %d ", a, b, sum);
// }
// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("Enter the value of a ");
//     scanf("%d", &a);
//     printf("enter the the value of b ");
//     scanf("%d", &b);
//     int c = a;
//     a = b;
//     printf("The value of a after swapping i %d , and the value if b after swapping is %d", b, c);
// }
// #include <stdio.h>
// void main()
// {
//     int a, b;
//     int temp = a, temp2 = b;
//     printf("enter the first temporary number ");
//     scanf("%d", &temp);
//     printf("enter the second temporary variable ");
//     scanf("%d", &temp2);
//     a = temp2;
//     b = temp;
//     printf("the value of A = %d \nand the value of b = %d\n", temp, temp2);
//     printf("The value of a after swapping is = %d \n and teh value of ba after swapping is %d", a, b);
// }
// #include <stdio.h>
// void main()
// {
//     int a, b;
//     printf("Enter the first number");
//     scanf("%d", &a);
//     printf("Enter te second number ");
//     scanf("%d", &b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("the value of a is %d and the value of b is %d ", a, b);
// }
#include <stdio.h>
void main()
{
    char k[] = "huzaifa";
    int s = 78776868;
    printf("the size of name is %d ", sizeof(k));
    printf("the size of integer is %d", sizeof(s));
}
// if - else function example
// date - 05-11-2025
// #include <stdio.h>
// void main()
// {
//     int passed_exam;
//     printf("Which exam/exams have you passes\nType 1 for maths \nType 2 for science \nType 3 if you passes both exams\nYour input : ");
//     scanf("%d", &passed_exam);
//     if (passed_exam == 1)
//     {
//         printf("you passed only maths exam so your points are : 15");
//     }
//     else if (passed_exam == 2)
//     {
//         printf("you passed only science exam so your points are : 15");
//     }
//     else if (passed_exam == 3)
//     {
//         printf("you passed both exams so your points are : 45");
//     }
//     else
//     {
//         printf("enter a valid input");
//     }
// }
