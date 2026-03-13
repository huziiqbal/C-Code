// //Q1.
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(int argc, char const *argv[])
// {
//     int a = atoi(argv[2]);
//     int b = atoi(argv[3]);

//     if (strcmp(argv[1],"sum") == 0){
//         printf("Sum = %d\n", a+b);
//     }
//     else if (strcmp(argv[1],"subtract") == 0){
//         printf("subtract = %d", a-b);
//     }
//     else if (strcmp(argv[1],"multiply") == 0){
//         printf("multiply = %d", a*b);
//     }
//     else if (strcmp(argv[1],"divide") == 0){
//         printf("divide = %d", a/b);
//     }
//     return 0;
// }
// /*gcc Command_line_Arguments.c -o Command_line_Arguments*/


// // Q 2.
// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char const *argv[])
// {

//     // int largest = 0 ;
//     int largest = atoi(argv[1]);
//     int n = argc;
//     printf("The size of argv is %d \n" , n);
//     for (int i = 1 ; i < n ; i++){
//         int j = atoi(argv[i]);
//          if (j > largest){
//             largest = j;
//          }
//     }
//     printf("The largest element is %d", largest);

// }

// // Q.3
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(int argc, char const *argv[])
// {
//     for (int i=argc - 1 ; i>0 ; i--){
//         printf("%s ",argv[i]);
//     }
// }
// //  Q4. factorial;
// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char const *argv[])
// {

//     int factorial = atoi(argv[1]);
//     for (int i = factorial-1 ; i>0 ;i--){
//         factorial = factorial * i ;
//     }

//     printf("The factoriala is %d", factorial);
// }

#include <stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = {1,1,2,16,3,3,4,8,8,8};
	int n = sizeof(arr)/sizeof(arr[0]);
    int max =0;
	for (int i =0 ; i < n ; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    int * visited = {0};
    visited=(int *)calloc(max,sizeof(int));

    for (int i = 0; i < n; i++) {
		visited[arr[i]]++;
	}

	for (int i = 0; i<=max; i++) {
		if (visited[i] != 0) {
			printf("%d : %d\n", i, visited[i]);
		}
	}
}
