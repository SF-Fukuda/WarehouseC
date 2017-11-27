#include <stdio.h>

int sumF(int* a,int* b){

	int sum = *a + *b;

	return sum;
}

int main(void){

	int a = 10;
	int b = 11;

	int ans = sumF(&a,&b);

	printf("%d\n", ans);
	return 0;
}