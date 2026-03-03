// Symetric Matrix //
#include<stdio.h>
int main()
{

    int matrix[4][4]= {{1,2,3,4},{2,5,6,7},{3,6,8,9},{4,7,9,10}};
    for (int i =0 ; i<4; i++){
        for (int j =0 ; j<4; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    int p =0;
    for (int i =0 ; i<4; i++){
        for (int j =0 ; j<4; j++){
            if (matrix[i][j]!=matrix[j][i]){
                p+=1;
            }
        }
    }
    if(p>0){
        printf("The given matrix is not symetric");
    }
    else
    printf("The given matrix is symetric");


    return 0;
}

//SECOND LARGEST ELEMENT FROM ARRAY//
#include <stdio.h>
int main()
{
    int n=8;
	int arr[]= {1,5,8,6,9,3,4,7};
	for(int j =0; j<n; j++) {
		for (int i =0 ; i<n-1-j; i++) {
			if (arr[i]>arr[i+1]) {
				int temp =arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
    for (int i =0 ; i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("The second largest element is %d",arr[n-2]);
	return 0;
}


//DYNAMIC  MEMORY ALLOCATION QUES:

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
		ptr=(char *)calloc(n,sizeof(char));
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
