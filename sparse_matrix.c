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
int main (){
    int r1,r2,c1,c2,n1,n2,val1,val2;
    scanf("%d %d",&r1,&c1);
    scanf("%d",&n1);
    int  mat1[n1][3];
    for ( int i = 0 ; i < n1 ;i++){
        for (int j = 0 ; j<3;j++){
        scanf("%d ",&mat1[i][j]);
        }
    }

    scanf("%d %d",&r2,&c2);
    scanf("%d",&n2);
    int  mat2[n2][3];
    for ( int i = 0 ; i < n2 ;i++){
        for (int j = 0 ; j<3;j++){
        scanf("%d ",&mat2[i][j]);
        }
    }
    int rmat1[n1][n1];
     for ( int i = 0 ; i < n1 ;i++){
        for (int j = 0 ; j<n1;j++){
            rmat1[i][j] = 0;
        }
     }
     for ( int i = 0 ; i < n1 ;i++){
        for (int j = 0 ; j<n1;j++){
            rmat1[(mat1[i][j])][(mat1[i][j+1])] = mat1[i][j+2];
            break;
        }
     }
    int rmat2[n1][n1];
     for ( int i = 0 ; i < n2 ;i++){
        for (int j = 0 ; j<n2;j++){
            rmat2[i][j] = 0;
        }
     }
     for ( int i = 0 ; i < n2 ;i++){
        for (int j = 0 ; j<n2;j++){
            rmat2[(mat2[i][j])][(mat2[i][j+1])] = mat2[i][j+2];
            break;
        }
     }
    int sum_matrix[n1][n1];
    for ( int i = 0 ; i < n1 ;i++){
        for (int j = 0 ; j<n1;j++){
            sum_matrix[i][j] = rmat1[i][j] + rmat2[i][j];
        }
    }
    int count =0 ;
    for ( int i = 0 ; i < n1 ;i++){
        for (int j = 0 ; j<n1;j++){
            if (sum_matrix[i][j] != 0){

                count++;
            }
        }
    }
    int sparse[count][3];
    int k = 0;
    for ( int i = 0 ; i<n1 ; i++){
        for (int j = 0 ; j<n1 ; j++){
            if (sum_matrix[i][j] != 0){
                sparse[k][0] = i ;
                sparse[k][1] = j;
                sparse[k][2] = sum_matrix[i][j];
                k++;
            }
        }
    }

     for ( int i = 0 ; i<count; i++){
        for (int j = 0 ; j<3; j++){
            printf("%d ",sparse[i][j]);
        }
        printf("\n");
     }

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
int main (){
    int  n , m ,k;
    scanf("%d %d %d",&n,&m,&k);
    int matrix[k][3];
    for (int j = 0 ; j < k ; j++ ){
        for ( int i = 0 ; i < 3 ;i++){
            scanf("%d",&matrix[j][i]);
        }
    }

    float read_avg = 0.0;
    int sensor_id;
    scanf("%d",&sensor_id);
    for ( int j = 0 ; j < k ; j++){
        for (int i = 0 ;i < 3 ; i++){
            printf("%d",matrix[j][i]);
            if ( i == 2 ){
                read_avg = read_avg + matrix[j][i];
            }
        }
        printf("\n");
    }

    float Avg_reading = read_avg /k;
    printf("Average Reading: %.2f\n",Avg_reading);
    int found = 0 ;

    for (int i = 0 ;i < k ; i++){
        if ( matrix[i][0] == sensor_id){
             printf("Sensor %d: %d\n",matrix[i][0],matrix[i][2]);
             found = 1;
             break;
        }
    }
    if (found==0){
         printf("No data recorded for this sensor.\n");
    }
    return 0 ;
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
