#include <stdio.h>

void inc(int *n1){
	*n1 += 1;
	printf("inc:%d\n", *n1);
}

int main(void){

	int a = 10;
	printf("main:%d\n", a);
	inc(&a);
	inc(&a);

	return 0;
}