#include <stdio.h>

int main(void){

	int point[10];
	int sum = 0;
	int avg = 0;
	int coun = 0;

	printf("10人分の点数を入力してください\n");
	for(int i = 0;i < 10;i++){
		scanf("%d",&point[i]);
		sum += point[i];
	}

	avg  = sum / 10;

	for(int j = 0;j < 10; j++){
		if(avg < point[j]){
			coun++;
		}
	}

	printf("平均点：%d\n平均点以上の人数：%d\n", avg,coun);

	return 0;
}