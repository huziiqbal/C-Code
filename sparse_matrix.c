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
