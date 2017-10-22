#include <stdio.h>

int multi(int x,int y){
	int z;
	z = x * y;

	return z;
}

int main(void){

	int num1 = 2;
	int num2 = 3;

	printf("%d\n", multi(num1,num2));

	return 0;
}