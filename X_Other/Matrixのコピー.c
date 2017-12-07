#include<stdio.h>

int main(void){

	int j = 0;
	int sum;
	int sum2 = 0;
	int matrix1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int matrix2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int matrix3[3][3] = {{0,0,0},{0,0,0},{0,0,0}};

	printf("行列1,2\n");
	for(int i = 0;i < 3;i++){
		for(j = 0;j < 3;j++){
			printf("%d ", matrix1[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	printf("配列1,2を足し算\n");

	for(int i = 0;i < 3;i++){
		for(j = 0;j < 3;j++){
			matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
			printf("%d ", matrix3[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	printf("配列1,2を掛け算\n");

	for(int s = 0;s < 3;s++){
		for(int t = 0;t < 3;t++){
			for(int u = 0;u < 3;u++){
				sum = matrix1[s][u] * matrix2[u][t];
				sum2 = sum2 + sum;
				matrix3[s][t] = sum2; 
			}
			sum2 = 0;
			printf("%d  ", matrix3[s][t]);
		}
		printf("\n");
	}

	return 0;
}