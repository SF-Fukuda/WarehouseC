#include <stdio.h>

void sumF(int* x,int* y,int* z){
	*z = *x + *y;
}

int main(void){
	
	int a = 10;
	int b = 11;
	int c = 0;

	sumF(&a,&b,&c);

	printf("c:%d\n", c);

	return 0;
}