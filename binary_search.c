#include <stdio.h>
int main()
{
	int target =5;
	int low =0 ;
	int high = 7;
	int arr[8] = {1,5,2,6,3,4,8,7};
	for (int i = 0; i < 8 ; i++) {
		for (int j =0 ; j<7-i; j++) {
			if (arr[j+1]<arr[j]) {
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Sorted array: ");
	for (int j =0 ; j<8; j++) {
		printf("%d ",arr[j]);
	}
	printf("\n");
	while(low<=high) {
		int mid = (low+high)/2;
		if (arr[mid] == target) {
			printf("The given target is on index number: %d", mid);
			break;
		}
		if (arr[mid]<target) {
			low=mid+1;
		}
		else if (arr[mid]>target) {
			high=mid-1;
		}
	}
}



#include<stdio.h>
int main (){

    int n;
    int ans = -1;
    scanf("%d",&n);
    int arr[n];
    for ( int i = 0; i < n ; i ++ ){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int found = 0;
    int low = 0 , high = n -1;
        while ( low <= high){
        int mid = (low + high) / 2;
            if ( arr[mid] == target){
                printf("The closest item ID less than or equal to %d is %d ",target,arr[mid]);
                return 0;
            }
            else if (arr[mid] <= target){
                low = mid+1;
                ans = arr[mid];
            }
           else  if ( arr[mid] >= target){
                high = mid - 1;
            }
        }
        if ( ans == -1){
            printf("No closest item with an ID less than or equal to %d exists in the warehouse\n",target);
        }
        else {
            printf("The closest item Id less than or equal to %d is %d", target ,ans);
        }
}


