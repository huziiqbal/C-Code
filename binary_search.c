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
