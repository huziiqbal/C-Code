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

//2nd correct/improved version of above ques //
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
		ptr=(char *)calloc(n+1,sizeof(char));
		printf("Enter your I'D: ");
		scanf("%s",ptr);
		printf("I'D:");
		printf("%s",ptr);
		printf("\n");

		free(ptr);
	}
	return 0;
}

// checking the pelindrome digit //
#include <stdio.h>
#include<string.h>
int palindrome(int n){
    char str_n[20];
    sprintf(str_n,"%d",n);
    int p=strlen(str_n);
    char rev[p+1];
    int k=0 ;
    for (int i = p-1 ; i>=0;i--){
        rev[k]=str_n[i];
        k++;
    }
    rev[p] = '\0';
    if (strcmp(str_n,rev )==0){
        printf("The number is palindrome");
    }
    else
    printf("The numnber is not palindrome");

    return 0;
}
int main (){
    int number;
	printf ("Enter the number: ");
	scanf("%d",&number);
	palindrome(number);
}

// INSERTION SORT
// DATE = 11/03/2026
#include <stdio.h>
int main()
{
	int arr[] = {5,4,3,2,1};
	int n = 5;
	int cur;
	int prev;
	for (int i = 1 ; i < 5 ; i++) {
		cur = arr[i];
		prev  = i - 1;

		while (prev >=0 && arr[prev] > cur) {
			arr[prev + 1 ] = arr[prev];
			prev--;
		}
		arr[prev + 1] = cur;
	}
	for (int i = 0; i < n; i++) {
		printf ( "%d ", arr[i]);
	}
}
