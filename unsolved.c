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
					// OR //
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
