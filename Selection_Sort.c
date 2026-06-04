#include <stdio.h>

int main(){
    int n = 6;
    int arr[] = {9,4,2,1,3,7};
    int j = 0 ;
    while ( j != n - 1){
        int k = j;
        int smallest = arr[j];
        for (int i = j+1 ; i< n ; i++){
            if (arr[i] < smallest){
                smallest = arr[i];
                k = i;
            }
        }
            int temp = arr[k];
            arr[k] = arr[j];
            arr[j] = temp;
    j++;
    }
    for (int i = 0 ; i < 6 ; i ++){
        printf("%d ",arr[i]);
    }

}
