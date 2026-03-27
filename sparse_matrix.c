#include <stdio.h>
int main()
{
	int matrix[3][3]= {{0,8,0},{0,0,5},{7,0,0}};
	int row=0;
	for (int i =0 ; i<3; i++) {
		for (int j =0 ; j<3 ; j++) {
			if (matrix[i][j]!=0) {
				row+=1;
			}
		}
	}
	int k =0;
	int sparse[row][3];
	for (int i =0 ; i<3; i++) {
		for (int j =0 ; j<3 ; j++) {
			if (matrix[i][j]!=0) {
				sparse[k][0]=i;
				sparse[k][1]=j;
				sparse[k][2]=matrix[i][j];
				k++;
			}
		}
	}
for (int i =0 ; i<row; i++) {
	for (int j =0 ; j<3; j++) {
		printf("%d ",sparse[i][j]);
	}
	printf("\n");
}
}



#include<stdio.h>
int main(){
    int r1,c1,r2,c2,k1,k2;
    scanf("%d %d",&r1,&c1);
    scanf("%d",&k1);
    int offset = 0;
    int matrix1[k1][3];
    for ( int i = 0 ; i < k1; i++){
        for ( int j = 0 ; j < 3 ; j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    if (matrix1[0][0] == 1){
        offset = 1;
    }

    scanf("%d %d",&r2,&c2);
    scanf("%d",&k2);
    int matrix2[k2][3];
    for ( int i = 0 ; i < k2; i++){
        for ( int j = 0 ; j < 3 ; j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
    if (matrix2[0][0] == 1){
        offset = 1;
    }
    int res1[r1][r1];
    int res2[r2][r2];
    for ( int i = 0 ; i < r1; i++){
        for (int j = 0 ; j < r1; j++){
            res1[i][j]=0;
        }
    }
    for ( int i = 0 ; i < r2; i++){
        for (int j = 0 ; j < r2; j++){
            res2[i][j]=0;
        }
    }
    for (int i = 0 ; i < k1;i++){
        res1[matrix1[i][0] - offset][matrix1[i][1] - offset] = matrix1[i][2];
    }
    for (int i = 0 ; i < k2;i++){
        res2[matrix2[i][0] - offset][matrix2[i][1] - offset] = matrix2[i][2];
    }
    int sum_mat[r1][c1];
    for ( int i = 0 ; i < r1; i++){
        for (int j = 0 ; j < c1; j++){
            sum_mat[i][j] = res1[i][j] + res2[i][j];
        }
    }
    int count = 0 ;
    for ( int i = 0 ; i < r1; i++){
        for (int j = 0 ; j < c1; j++){
            if(sum_mat[i][j] != 0){
                count++;
            }
        }
    }
    int sparse_matrix[count][3];
    int k = 0 ;
    printf("Sparse Matrix:\n");
    printf("Row Column Value\n");
    for ( int i = 0 ; i < r1;i++){
        for (int j = 0 ; j < c1;j++){
            if (sum_mat[i][j]!=0){
                sparse_matrix[k][0]= i + offset;
                sparse_matrix[k][1]= j + offset ;
                sparse_matrix[k][2]= sum_mat[i][j];
                k++;
            }
        }
    }
    for ( int i = 0 ; i < count;i++){
        for (int j = 0 ; j < 3;j++){
            printf("%d   ",sparse_matrix[i][j]);
        }
        printf("\n");
    }

return 0;

}


// A → Stores the nonzero values in row-wise order.
// IA → Stores the starting index of each row’s nonzero values in A. The last index in IA is the total number of nonzero elements.
// JA → Stores the column index of each nonzero element in A.

// Input 1 :              Output 1 :
// 4 5
// 0 0 0 0 1             0 0 0 0 1
// 5 8 0 0 0             5 8 0 0 0
// 0 0 3 0 0             0 0 3 0 0
// 0 6 0 0 1             0 6 0 0 1
//                      A = [ 1 5 8 3 6 1 ]
//                      IA = [ 0 1 3 4 6 ]
//                      JA = [ 4 0 1 2 1 4 ]



#include<stdio.h>
int main (){

    int r , c;
    scanf("%d %d",&r,&c);
    int matrix[r][c];
    for ( int i = 0 ; i < r ; i++){
        for ( int j = 0 ; j < c ; j++){
            scanf("%d" , &matrix[i][j]);
        }
    }
    int A[10];
    int IA[r+1];
    int JA[10];
    int k = 0 ;
    int count = 0 ;
    for ( int i = 0 ; i < r ; i++){
        for ( int j = 0 ; j < c ; j++){
            if ( matrix[i][j] != 0){
                A[k] = matrix[i][j];
                count++;
                k++;
            }
        }
    }
    for ( int i = 0 ; i < r ; i++){
        for ( int j = 0 ; j < c ; j++){
            printf("%d " ,matrix[i][j]);
        }
        printf("\n");
    }
    printf("A = [ ");
    for ( int i = 0 ; i<count ; i++ ){
        printf("%d ",A[i]);
    }
    printf("]\n");
    IA[0] = 0;
    int m = 1;
    int count3;
    for ( int i = 0 ; i < r ; i++){
        count3 = 0;
        for ( int j = 0 ; j < c ; j++){
            if ( matrix[i][j] != 0){
                count3++;
            }
        }
            IA[m] = IA[m-1] + count3;
            m++;
    }
    printf("IA = [ ");
    for ( int i = 0 ; i<r+1 ; i++ ){
        printf("%d ",IA[i]);
    }
    printf("]\n");


    int l = 0;
    int count2 = 0;
    for ( int i = 0 ; i < r ; i++){
        for ( int j = 0 ; j < c ; j++){
            if ( matrix[i][j] != 0){
                JA[l] = j;
                count2++;
                l++;
            }
        }
    }

    printf("JA = [ ");
    for ( int i = 0 ; i<count2 ; i++ ){
        printf("%d ",JA[i]);
    }
    printf("]");
}

// Input 1 :
// 5 12 3
// 101 3 25
// 102 4 30
// 101 5 28
// 101

// Output 1 :
// 101 3 25
// 102 4 30
// 101 5 28
// Average Reading: 27.67
// Sensor 101: 25


#include<stdio.h>
int main(){
    int n,m,k;
    scanf("%d %d",&n,&m);
    scanf("%d",&k);
    int matrix[k][3];
    for ( int i = 0 ; i < k; i++){
        for (int j = 0 ; j < 3 ; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int ID;
    scanf("%d",&ID);
    for ( int i = 0 ; i < k; i++){
        for (int j = 0 ; j < 3 ; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    float avg;
    float total = 0;
    for ( int i = 0 ; i < k; i++){
            total = total +matrix[i][2];
    }
    if (k>0){
    avg = total / k ;
    }
    else
    avg = 0;
    int no = 0 ;
    printf("Average Reading: %.2f\n",avg);
    for ( int i = 0 ; i < k; i++){
        if (matrix[i][0] == ID){
                printf("Sensor %d: %d\n",ID,matrix[i][2]);
                break;
        }
        else
        no++;
    }
    if (no == k){
        printf("No data recorded for this sensor.\n");
    }

}

// Input 1 :
// 3 4
// 5
// 1 0 10
// 1 2 20
// 2 0 30
// 3 3 40
// 2 2 50
// Output 1 :
// Sparse Array (row_index col_index quantity):
// 1 0 10
// 1 2 20
// 2 0 30
// 3 3 40
// 2 2 50

// Total quantity ordered per product:
// Product 0: 40
// Product 2: 70
// Product 3: 40

// Input 2 :
// 3 4
// 5
// 0 0 10
// 0 1 20
// 1 0 30
// 2 2 15
// 1 3 5
// Output 2 :
// Sparse Array (row_index col_index quantity):
// 0 0 10
// 0 1 20
// 1 0 30
// 2 2 15
// 1 3 5

// Total quantity ordered per product:
// Product 0: 40
// Product 1: 20
// Product 2: 15
// Product 3: 5

#include<stdio.h>
int main(){
    int n ,m , k ;
    scanf("%d %d",&n,&m);
    scanf("%d",&k);
    int matrix[k][3];
    for ( int i = 0 ; i < k ; i ++){
        for (int j = 0 ; j < 3 ; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Sparse Array (row_index col_index quantity):\n");
    for ( int i = 0 ; i < k ; i ++){
        for (int j = 0 ; j < 3 ; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
        printf("\n");
    printf("Total quantity ordered per product:\n");
    int arr[100]={0};
    for ( int i = 0 ; i < k ; i++){
        arr[matrix[i][1]] += matrix[i][2];
    }
    for ( int i = 0 ; i < 100;i++){
        if ( arr[i]!=0){
            printf("Product %d: %d\n",i,arr[i]);
        }
    }

}




#include<stdio.h>
int main (){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int k;
    int count = 0 ;
    scanf("%d",&k);
    for ( int i = 0  ; i < n ; i++){
        if ( arr[i] <= k){
            count++;
        }
    }
    int diff[count];
    if ( arr[0] > k){
        printf("No closest item with an ID less than or equal to %d exists in the warehouse\n",k);
    }
    else{
        for ( int i = 0 ; i < n;i ++){
            if (arr[i] <= k){
                diff[i] = k - arr[i];
            }
        }
        for ( int i = 0 ; i < count ; i++){
            for ( int j = 0 ; j < count - 1 - i ; j++){
                if (diff[j] > diff[j+1]){
                    int temp = diff[j];
                    diff[j] = diff[j+1];
                    diff[j+1] = diff[j];
                }
            }
        }
    printf("The closest item ID less than or equal to %d is %d",k,k - diff[0]);
    }
}


#include<stdio.h>
int main (){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0 ; i< n ; i++){
        scanf("%d",&arr[i]);
    }
    int m ;
    scanf("%d",&m);
    int arr2[m];
    for ( int i = 0 ; i < m ; i++){
        scanf("%d", &arr2[i]);
    }
    int pos;
    int no;
    for ( int i = 0 ; i < m ; i ++){
        pos = 0 ;
        no = 0 ;
        for ( int j = 0 ; j < n ; j++){
            if (arr2[i] == arr[j]){
                printf("%d found at position %d\n",arr2[i], j+1);
            }
            else
            no++;
            pos = i ;
        }
        if (no == n){
            printf("%d not found in the inventory",arr2[pos]);
        }

    }

}

// Input 1 :
// 10
// 1 2 2 2 2 3 4 8 8 8
// 8
// Output 1 :
// 7 9
// Input 2 :
// 10
// 1 2 2 2 2 3 4 8 8 8
// 5
// Output 2 :
// NO OCCURRENCES

#include<stdio.h>
int main (){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for ( int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int k,d,l;
    int no = 0,found = 0 ;
    scanf("%d",&k);
    for ( int i = 0 ; i < n ; i++){
        if ( arr[i]==k){
            found = 1;
            d = i;
            while(arr[i]==k){
                l = i;
                i++;
            }
        }
        else
        no++;
    }
    if (found == 1){
        printf("%d %d",d,l);
    }
    if ( no == n){
        printf("NO OCCURRENCES");
    }

}


// Input 1 :
// 5
// 10 20 30 40 50
// 4
// 40 20 60 10
// Output 1 :
// 40 found at position 4
// 20 found at position 2
// 60 not found in the array
// 10 found at position 1
// Input 2 :
// 4
// 11 22 33 44
// 2
// 22 55
// Output 2 :
// 22 found at position 2
// 55 not found in the array

#include<stdio.h>
int main (){
    int n ;
    scanf("%d",&n);
    int arr1[n];
    for ( int i = 0 ; i < n ; i++){
        scanf("%d",&arr1[i]);
    }
    int m;
    scanf("%d",&m);
    int arr2[m];
    for ( int i = 0 ; i < m ; i++){
        scanf("%d",&arr2[i]);
    }
    int no;
    for ( int i = 0 ; i < m; i++){
        no = 0;
        int d = 0;
        for ( int j = 0 ;j < n ; j++){
            if (arr2[i] == arr1[j]){
                printf("%d found at position %d\n",arr2[i],(j+1));
                break;
            }
            else{
                no++;
                d= arr2[i];
            }
        }
        if (no == n){
            printf("%d not found in the array\n",d);
        }
    }

}
