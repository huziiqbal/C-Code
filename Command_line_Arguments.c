#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);

    if (strcmp(argv[1],"sum") == 0){
        printf("Sum = %d\n", a+b);
    }
    else if (strcmp(argv[1],"subtract") == 0){
        printf("subtract = %d", a-b);
    }
    else if (strcmp(argv[1],"multiply") == 0){
        printf("multiply = %d", a*b);
    }
    else if (strcmp(argv[1],"divide") == 0){
        printf("divide = %d", a/b);
    }
    return 0;
}


