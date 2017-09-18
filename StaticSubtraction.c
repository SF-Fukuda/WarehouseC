#include <stdio.h>

int main(void){

	//ユーザが入力した値で引き算をするプログラム

	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	//UI
	printf("引き算をするプログラム（A - B）\n");
	printf("最初の値、Aを入力してください::");
	scanf("%d",&num1);
	printf("最後の値、Bを入力してください::");
	scanf("%d",&num2);

	//処理
	sum = num1 - num2;

	printf("A - B = %d\n",sum);


	return 0;
}