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
