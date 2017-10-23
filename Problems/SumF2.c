#include <stdio.h>

int pri(void){

	printf("整数を入力:");

	return 0;
}

int main(void){

	int a,b;

	pri();
	scanf("%d",&a);
	pri();
	scanf("%d",&b);

	printf("SUM:%d\n", a + b);

	return 0;
}