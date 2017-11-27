#include <stdio.h>

void square(int* x,int* y){
	*y = *x * *x;
}

int main(void){
	
	int a = 10;
	int b = 0;

	square(&a,&b);

	printf("b:%d\n", b);

	return 0;
}