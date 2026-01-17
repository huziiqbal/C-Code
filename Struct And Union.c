#include<stdio.h>
void reve(int*n){
    int ptr = *n;
    printf("%d ",ptr);
}
void main (){
    int arr[]={1,2,5,6,9,8,7,45};
    printf("The original array is :\n");
    for (int j=0 ; j<8;j++){
        reve(&arr[j]);
    }
    printf("\n");
    printf("Reversed array is :\n");
    for(int i=7 ; i>=0;i--){
        reve(&arr[i]);
    }
}
#include<stdio.h>
void reve(int*arr[]){
      for (int j=0 ; j<8;j++){
        printf("%d",arr[j]);
    }
}
void main (){
    int arr[]={1,2,5,6,9,8,7,45};
    int n = sizeof(arr[n])/sizeof (arr[0]);
    reve(&arr[n]);
}

#include<stdio.h>
void huzi(int*arr){
      for (int j=0 ; j<8;j++){
        printf("%d ",arr[j]);
    }
}
void main (){
    int arr[] = {7,2,5,6,9,8,7,45};
    int n = sizeof(arr[n])/sizeof (arr[0]);
    huzi(arr);
    printf("\n");
    printf("%d",&arr);
    printf("\n");
    int*abs= arr;
    printf("%d\n",*abs);
    printf("%d\n",arr+2);
    printf("%d\n",*arr);
  for (int j=0 ; j<8;j++){
        printf("%d ",*(arr+j));
    }
}
// WRONG
// #include<stdio.h>
// int main (){
//     int n;
//     printf("Enter the length of the array you want to reverse: \n");
//     scanf("%d",&n);
//     printf("Enter the elements of your array: \n");
//     int arr[n];
//     for (int i=0 ;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("your array is :\n");
//     for(int i=0 ;i<n;i++){
//         printf("%d",arr[i]);
//     }
//     printf("\n");
//     int len = sizeof (arr)/sizeof (arr[0]);
//     int len_ind = len - 1 ;
//     if (len%2==0){
//         int mid = (len/2) - 1 ;
//         for (int i=0 ; i<=mid ; i++){
//             arr[i]=arr[len_ind-i];
//         }
//     }
//     else if (len%2!=0){
//         int mid = (len+1)/2 ;
//         for (int i=0 ; i<=(mid-1) ; i++){
//             arr[i]=arr[len_ind-i];
//         }
//         for (int i=mid ; i<=len_ind ; i++){
//             arr[i]=arr[len_ind-i];
//         }
//     }
//     printf("Reversed array is: \n");
//       for (int i=0 ;i<n;i++){
//         printf("%d",arr[i]);
//     }
// }
// CORRECT
#include<stdio.h>
int main (){
    int n , temp;
    printf("Enter the length of the array you want to reverse: \n");
    scanf("%d",&n);
    printf("Enter the elements of your array: \n");
    int arr[n];
    for (int i=0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("your array is :\n");
    for(int i=0 ;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    int len = sizeof (arr)/sizeof (arr[0]);
    int len_ind = len - 1 ;
    int mid = len/2;
    for (int i = 0 ; i<mid ; i++){
        temp = arr[i];
        arr[i] = arr[len_ind- i];
        arr[len_ind - i] = temp;
    }
    printf("Reversed array is: \n");
      for (int i=0 ;i<n;i++){
        printf("%d",arr[i]);
    }
}






//STRUCT AND UNION
#include <stdio.h>
#include<string.h>
struct students {
    int roll_number;
    char block_name;
    char arr[15];
};


int main (){
    // 1ST METHOD
    struct students huzi;
    huzi.roll_number = 12;
    huzi.block_name = 'B';
    strcpy(huzi.arr,"huzaifa");
    printf("%d\n",huzi.roll_number);
    printf("%c\n",huzi.block_name);
    printf("%s\n",huzi.arr);

    // 2ND METHOD
    struct students huzii = {12,'B' , "huzaifa"};
    printf("%d\n",huzii.roll_number);
    printf("%c\n",huzii.block_name);
    printf("%s\n",huzii.arr);

    printf("%d", sizeof(struct students));

}

#include <stdio.h>
#include<string.h>
struct addition {
    int num1;
    int num2;

};

int main (){
    struct addition math = {12, 15};
    int sum = math.num1 + math.num2 ;
    printf("%d\n", sum);
    printf("%d", sizeof(struct addition));

}

// Create a structure to store employee id, name, and salary.
// Input details of N employees and display details of employees whose salary is greater than a given value.
#include <stdio.h>
#include <string.h>
struct Employees{
    int Employee_id;
    char name[20];
    int salary;

};

int main (){
    struct Employees huzi = {100, "Huzi" , 100000};
    struct Employees Huzaifa = {200 , "Huzaifa" , 200000};
    struct Employees huji = {300 , "Huji" , 50000};
    struct Employees salar[3] = {huzi,Huzaifa,huji};

    int sal;
    printf("Enter the comparative salary: ");
    scanf("%d",&sal);
    printf("THE EMPLOYEES ABOVE THIS SALARY CAP ARE: \n");
      for (int i=0;i<3;i++){
          if (sal<salar[i].salary){
              printf(" Employee_id = %d\n Name = %s\n Salary = %d\n",salar[i].Employee_id,salar[i].name,salar[i].salary);
          }
      }

 }
