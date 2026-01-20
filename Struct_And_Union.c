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




// Q1
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

// Q2 . Create a structure to store employee id, name, and salary.
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
// Q3 . Structure with Function
// Create a structure for distance (km and meters).
// Write a program that takes two distances, adds them using a function, and prints the result.

 #include <stdio.h>
struct Distance{
    int dis_in_km;
    int dis_in_meter;
};

int add(int *c , int *d ,struct Distance j1 , struct Distance j2 ){

    *c = j1.dis_in_km + j2.dis_in_km ;
    *d = j1.dis_in_meter + j2.dis_in_meter;

}

int main (){
    struct Distance journey1 = { 55 , 55000};
    struct Distance journey2 = { 11 , 11000};

    int kmdis, mdis;
    add(&kmdis, &mdis , journey1 , journey2);

    printf("TOTAL COMBINED DISTANCE = %d km %d meters" ,kmdis, mdis);
}


// Q4. Student Result System
// Create a structure for a student containing roll number, name, and marks of 5 subjects.
// Calculate and display total marks and percentage for each student.

#include <stdio.h>
struct Profile{
    int Roll_number;
    char name[20];
    int marks [5];
};

int result(int *arr , int *a , int* b ){
    for (int i = 0 ; i<5 ; i++){
    *a = *a + arr[i];
    }
    *b = ( *a * 100)/ 150 ;
    return 0 ;
}

int main(){

    struct Profile Student1 = {101, "Huzaifa", {10, 10, 10, 10, 10}};

    int total = 0, percent;

    result(Student1.marks, &total, &percent);
    printf(" Name = %s \n Roll number = %d \n Total marks = %d \n Percentage = %d %%", Student1.name, Student1.Roll_number, total, percent);
}


// Q5. Nested Structure – Date of Birth
// Create a structure Student that contains roll number, name, and another structure DOB containing day, month, year.
// Input details for multiple students and display them neatly.

#include <stdio.h>
struct DOB{
    int day;
    int month;
    int year;

};
struct Profile{
   int roll_number;
   char name [20];
   struct DOB dob ;

};

int main(){

    struct DOB huzi = {07 , 04 , 2005};
    struct DOB ziya = {06 , 03 , 2010};

    struct Profile huzaifa = {100 , "huzaifa" , huzi};
    struct Profile ziiya = {200 , "ziya" , ziya};


    printf(" Huzaifa:\n");
    printf(" Roll number = %d\n Name = %s \n Day of birth = %d\n month of birth = %d\n year of birth = %d\n" , huzaifa.roll_number , huzaifa.name , huzi.day , huzi.month , huzi.year);
    printf(" \n \n ZIYA:\n");
    printf(" Roll number = %d\n Name = %s \n Day of birth = %d\n month of birth = %d\n year of birth = %d\n" , ziiya.roll_number , ziiya.name , ziya.day , ziya.month , ziya.year);

    return 0;
}

// Q6. Structure Pointer + Sorting
// Create a structure to store name, roll number, and CGPA of students.
// Use structure pointers to sort students by CGPA in descending order and display the result.

#include <stdio.h>
 struct Profile {
     char name[20];
     int roll_number;
     float CGPA;
 };

 int arranged ( struct Profile * marks){

     for (int j = 0; j < 3; j++) {
     for (int i =0 ; i < 3 - j ; i++){
         if (marks[i].CGPA < marks[i+1].CGPA){
             struct Profile temp = marks[i];
             marks[i] = marks[i + 1];
             marks[i + 1] = temp;
         }
     }}
     return 0;
 }

int main()
{
   struct Profile huzi = {"Huzii", 100 , 9.2};
   struct Profile huzaifa = {"Huzaifa", 200 , 9.8};
   struct Profile huzii = {"Huzi", 300 , 9.5};
   struct Profile ziya = {"Ziya", 400 , 10.0};

  struct Profile arr [4] = {huzi, huzaifa, huzii, ziya};

  arranged(arr);
  printf("SORTED LIST OF STUDENTS ACCORDING TO CGPA : \n");
  for (int i =0 ; i <4 ; i++){
      printf("NAME: %s\nRoll Number: %d\nCGPA: %.2f\n",arr[i].name,arr[i].roll_number, arr[i].CGPA);
      printf("\n");
  }
  return 0;

}




// UNION

// Q1 . Create a union to store either a roll number or CGPA of a student.
// Store one at a time and display it based on user choice.

#include <stdio.h>
union Profile {
     int roll_number ;
     float CGPA ;
 };

int main()
{
  int choice;
  union Profile huzi;
  printf("Enter what detail of huzi you want to check: \n1.Roll number\n2.CGPA\n");
  scanf("%d", &choice);
  switch(choice){
  case 1 : huzi.roll_number = 100;
  printf("ROll NUMBER = %d",huzi.roll_number);
  break;
  case 2 : huzi.CGPA = 9.9;
  printf("CGPA =  %.2f", huzi.CGPA);
  break;
  default :
  printf("INVALID INPUT");
  }

  return 0;
}


// Q 2 .
 #include <stdio.h>
#include <string.h>
 union Profile {
     int i ;
     char c ;
     char arr[15];
 };



int main()
{
  union Profile huzi;
  huzi.i = 69;
  printf("%d\n", huzi.i);
  huzi.c ='A';
  printf("%c\n",huzi.c);
  strcpy(huzi.arr,"huzaifa");
  printf("%s\n", huzi.arr);
  printf("%d" , sizeof(huzi)); // important size concept , here, size = 16 , if arr[17] then size = 20
}


// Q3. Employee Salary Representation
// Create a union that stores hourly wage or monthly salary.
// Use it to represent employees with different pay types and display the stored value.
#include <stdio.h>
union Profile {
     int hourly_wage ;
     int monthly_salary ;
 };

int main()
{
    union Profile workers;
    int type;
    printf("Choose your salary type: \n1 for Hourly wage\n2 for Monthly salary\n");
    scanf("%d",&type);
    if (type == 1){
         printf("Enter your salary: ");
         scanf("%d",&workers.hourly_wage);
        printf("Employed is paid Hourly\nSalary amount = %d", workers.hourly_wage);
    }
    else if (type == 2){
        printf("Enter your salary: ");
        scanf("%d",&workers.monthly_salary);
        printf("Employed is paid Monthly\nSalary amount = %d",workers.monthly_salary);
    }
    else
    printf("INVALID INPUT");


  return 0;
}



#include <stdio.h>
int main()
{
	char arr[] = "<h1>this is the example string</h1>";
	int l = sizeof(arr)/sizeof(arr[0]);
	for (int i= 0 ; i <l ; i++) {
		if (arr[i] == '>') {
			int j= i + 1;
			do {
				printf("%c", arr[j]);
				j= j + 1;
			} while (arr[j] != '<');
			if (arr[j]=='<') {
				break;
			}

		}
	}
	return 0;
}


Q8. Tagged Union (Union + Flag)
Create a structure containing:

a flag variable

a union holding either int, float, or char
Use the flag to decide which union member is valid and display accordingly.

Q9. Memory Optimization Scenario
Design a program using a union to store different sensor data types (temperature, pressure, humidity), where only one sensor is active at a time.
Demonstrate memory-efficient storage./
