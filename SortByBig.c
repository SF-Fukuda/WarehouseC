#include <stdio.h>

int main(void){

	//ユーザが入力した2つの値を大きい順番に並べる

	int num1 = 0;
	int num2 = 0;

	printf("整数ABを入力してください\n");
	printf("整数A：");
	scanf("%d",&num1);
	printf("整数B：");
	scanf("%d",&num2);

	//等しかった場合の処理も明示しておく
	if(num1 < num2 || num1 == num2){
		printf("大きい順に%dー＞%dです\n", num2,num1);
	}else{
		printf("大きい順に%dー＞%dです\n", num1,num2);
	}

	return 0;
}