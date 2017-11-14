#include <stdio.h>

int sum(int x,int y){

	int z;
	z = x + y;

	return z;
}

int main(void){

	int a,b,num;

	a = 10;b = 11;

	num = sum(a,b);

	printf("%d\n", num);

	return 0;
}