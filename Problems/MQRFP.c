#include <stdio.h>

int mqr(int n1,int n2,int* mul,int* qut,int* res){
	*mul = n1 * n2;
	*qut = n1 / n2;
	*res = n1 % n2;

	printf("mul:%d\n", *mul);
	printf("qut:%d\n", *qut);
	printf("res:%d\n", *res);

	return 0;
}

int main(void){

	int a = 10;
	int b = 4;
	int m = 0;
	int q = 0;
	int r = 0;

	printf("a:%d\n",a);
	printf("b:%d\n",a);

	mqr(a,b,&m,&q,&r);

	return 0;
}