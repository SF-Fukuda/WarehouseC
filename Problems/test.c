#include <stdio.h>

int main(void){


	int point[10];
	int avgSub[10];
	int sum = 0;
	int avg = 0;
	printf("10人分の点数を入力してください\n");
	for(int i = 0;i < 10;i++){
		scanf("%d",&point[i]);
		sum += point[i];
	}

	avg  = sum / 10;

	for(int j = 0;j < 10; j++){
		avgSub[j] = point[j] - avg;
	}
	for(int k =0;k < 10;k++){
		printf("%d番目の人の平均点との得点差：%d\n",k + 1,avgSub[k]);
	}

	return 0;
}