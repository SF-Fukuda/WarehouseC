#include <stdio.h>
void input(int* num){
	printf("整数を入力してください：");
	int dnum;
	scanf("%d",&dnum);
	*num = dnum;
}

void square(int* x,int* y){
	*y = *x * *x;
}

int main(void){
	
	int a = 0;
	int b = 0;
	input(&a);
	square(&a,&b);

	printf("%dを2乗すると:%d\n",a, b);

	return 0;
}