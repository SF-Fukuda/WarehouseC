#include <stdio.h>
void sum1(int* num1, int* num2, int* ans){
	int anum;int bnum;
	printf("整数を入力してください a：");
	scanf("%d",&anum);
	printf("整数を入力してください b：");
	scanf("%d",&bnum);
	*num1 = anum;
	*num2 = bnum;
	*ans = *num1 + *num2;
}

void sum2(int* x,int* y){
	int cnum;
	printf("整数を入力してください Ans(a+b) + ");
	scanf("%d",&cnum);
	*x = cnum;
	*y = *y + *x;
}

int main(void){
	
	int a = 0;int b = 0;int c = 0;int d = 0;
	sum1(&a,&b,&d);
	sum2(&c,&d);
	printf("Ans:%d\n",d);

	return 0;
}