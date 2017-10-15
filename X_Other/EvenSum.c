#include <stdio.h>

int main(void){

	int num[5] = {};
	int user = 0;
	int sum = 0;

	for(int i = 0;i < 5;i++){
		printf("数字を入力（%d回目）＝＞",i + 1);
		scanf("%d",&user);
		num[i] = user;
	}

	for(int j = 0;j < 5;j++){
		if(num[j] % 2 == 0){
			sum += num[j];
		}
	}

	printf("偶数の合計：%d\n",sum);

	return 0;
}