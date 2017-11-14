#include <stdio.h>
#include "sumCF.h"

int main(void){

	int a,b,num;

	a = 10;b = 11;

	num = sumCF(a,b);

	printf("sum:%d\n", num);

	return 0;
}