#include <stdio.h>

int main(void){

	//ユーザが入力した値が偶数か奇数かを調べるプログラム

	int num = 0;

	printf("整数を入力してください\n");
	scanf("%d",&num);

	if(num % 2 == 0 ){
		printf("%dは偶数です\n", num);
	}else {
		printf("%dは奇数です\n", num);
	}


	return 0;
}