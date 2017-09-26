#include <stdio.h>

int main(void){

	int num1 = 2;
	double num2 = 2;

	printf("%f\n", 3 / num2);
	printf("%d\n", 3 / num1);

	if(3 / num2 == 3 / num1){
		printf("true\n");
	}else{
		printf("false\n");
	}

	num1 = num2 = 3;
	printf("1:%d,2:%f\n", num1,num2);

	num2 = num1 = 3.14;
	printf("1:%d,2:%f\n", num1,num2);

	num1 = 2;
	num1 = num1 = num1;
	printf("%d\n", num1);

	//6
	num1 = 2;
	int num3 = 3;

	num1 = num1++ - --num2;
	printf("num1:%d\n", num1);

	num1 = 2;
	num1 = num1++ - num1++ + num1++;
	printf("7:num1 = %d\n", num1);

	return 0;
}