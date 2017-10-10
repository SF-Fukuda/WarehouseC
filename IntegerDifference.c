#include <stdio.h>

int main(void){

	int num1 = 0;
	int num2 = 0;
	int ans = 0;

	printf("整数ABを入力してください\n");
	printf("整数A：");
	scanf("%d",&num1);
	printf("整数B：");
	scanf("%d",&num2);

	ans = num1 - num2;

	//num1 > num2の時は11以上、num1 < num2の場合は-11以下の値になる
	if(ans >= 11 || ans <=  -11){
		printf("整数の差は11以上です\n");
	}else{
		printf("整数の差は10以下です\n");
	}

	return 0;
}