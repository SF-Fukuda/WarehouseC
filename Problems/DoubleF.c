#include <stdio.h>

int get2(void){
	
	int num1 = 0;

	printf("整数を入力：");
	scanf("%d",&num1);
	int num2 = num1 * 2;

	return num2;
}

int main(void){

	int num = get2();
	printf("倍：%d\n", num);

	return 0;
}