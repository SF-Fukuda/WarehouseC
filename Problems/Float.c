#include <stdio.h>

int main(void){

	double num1 = 0;
	double num2 = 0;
	double ansf = 0;
	int ansi = 0;

	printf("少数を入力してください。\n");
	printf("少数A");
	scanf("%lf",&num1);
	printf("少数B");
	scanf("%lf",&num2);

	ansf = num1 + num2;

	ansi = (int)ansf;

	printf("A + B = %f\n",ansf);
	printf("整数部：%d\n",ansi);

	return 0;
}