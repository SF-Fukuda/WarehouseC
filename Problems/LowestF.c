#include<stdio.h>

int lowest(int x){
	double num;
	num = (double)x / 10;
	num -= x/10;
	return num*10;
}

int main(void){

	int num1 = 12345;
	printf("%d\n", lowest(num1));

	return 0;
}