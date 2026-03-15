#include<stdio.h>
#include<stdlib.h>
int main (){

   int  n = 6;
   int *ptr ;
   ptr = ( int*)calloc (n,sizeof(int));
   for (int i = 0 ; i<n ; i++){
       scanf("%d", &ptr[i]);
   }

   for (int i = 0 ; i<n ; i++){
       printf("%d", ptr[i]);
   }
   printf("\n");
    int new = 7;
    ptr = (int *)realloc(ptr ,new * sizeof(int));
    scanf("%d", &ptr[new-1]);
    for (int i = 0 ; i<new ; i++){
       printf("%d", ptr[i]);
   }
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[] = {1,1,2,3,3,4,8,8,8,16};
    int max = 0 ;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i =0 ; i< n ; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    int * visited = {0};
    visited=(int *)calloc(max,sizeof(int));
    //  int visited[max + 1];
    //   for (int i = 0; i <= max; i++){
    //     visited[i] = 0;
    // }
    for ( int i = 0 ; i < n ; i++){
                visited[arr[i]]++;

    }
    for (int i=0;i<=max;i++){
        if (visited[i] != 0 ){
            printf("%d : %d\n", i , visited[i]);
        }
    }

}

#include <stdio.h>
#include<stdlib.h>
int main()
{
	for (int j =0 ; j<3 ; j++) {
		int n;
		printf("EMPLOYEE NUMBER %d\n",j+1);
		printf("Enter the number of characters in your I'd: ");
		scanf("%d",&n);
		char *ptr;
		ptr=(char *)calloc(n,sizeof(char));		ptr=(char *)calloc(n,sizeof(char));
		printf("Enter your I'D: ");
		for (int i =0 ; i<=n; i++) {
			scanf("%c",&ptr[i]);
		}
		printf("I'D:");
		for (int i =0 ; i<=n; i++) {
			printf("%c",ptr[i]);
		}
		printf("\n");

		free(ptr);
	}
	return 0;
}
