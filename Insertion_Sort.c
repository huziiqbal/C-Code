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
