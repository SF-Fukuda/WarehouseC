#include<stdio.h>

int main(void){

	int num = 0;
	int sum = 0;
	float avg = 0;


	for(int i = 0;i<5;i++){
		printf("科目%dの点数を入力してください\n", i + 1);
		scanf("%d",&num);

		sum = sum + num;

	}

	avg = (float)sum / 5.0;

	printf("5科目の合計点は%dです。\n", sum);
	printf("5科目の平均点は%f点です。\n", avg);

	return 0;
}