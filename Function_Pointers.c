// Simple add/sub operation using fxn pointer array//
// date = 16/03/26
#include <stdio.h>
int add(int n, int m){
    return n + m;
}
int sub(int n, int m){
    return n - m;
}
int main()
{
    int a , b;
    int choice;
    printf("Enter 2 numbers for operation: ");
    scanf("%d %d", &a,&b);
    printf("Enter your choice for operation:\n1.add\n2.sub\n");
    scanf("%d",&choice);
    int (*ptr[2])() = {add,sub};
    int result = ptr[choice-1](a,b);
    printf("Result = %d", result);

}


//Finding the area od circle using the coordinates , and EuclideanDistance as its radiius//
// date = 16/03/26

#include <stdio.h>
#include <math.h>
#define PI 3.14
float area(float a)
{
    return PI * a * a;
}
float EuclideanDistance(int x1, int x2, int y1, int y2)
{
    float distance = sqrt(pow((x2 - x1), 2.0) + pow((y2 - y1), 2.0));
    return distance;
}
int main()
{
    int x1, x2, y1, y2;
    printf("Enter all the 4 coordinates x1 , x2, y1, y2: ");
    scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
    float (*area_of_circle)(int a, int b, int c, int d);
    area_of_circle = EuclideanDistance;
    float radius = area_of_circle(x1, x2, y1, y2);

    printf("The area of the resultant circle is %.2f", area(radius));
    return 0;
}
