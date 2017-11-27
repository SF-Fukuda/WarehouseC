#include <stdio.h>

void sumF(int* x,int* y){
	*x = *x + *y;
}

int main(void){
	
	int a = 10;
	int b = 12;


	sumF(&a,&b);

	printf("a:%d\n", a);

	return 0;
}