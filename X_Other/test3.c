#include <stdio.h>

int main(void){

	//ユーザが入力した値が偶数か奇数かを調べるプログラム

	int num = 0;

	printf("整数を入力してください\n");
	scanf("%d",&num);

	num % 2 == 0?printf("偶数\n"):printf("奇数\n");;

	return 0;
}