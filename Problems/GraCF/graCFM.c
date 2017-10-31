#include <stdio.h>
#include "graCF.h"

int main(void){

	int num1,num2, ans;

	printf("2つの整数ABを入力(A > B)\n");
	do{
		printf("整数A：");
		scanf("%d",&num1);
		printf("整数B：");
		scanf("%d",&num2);
	}while(num1 <= num2);

	ans = graCF(num1,num2);

	printf("最大公約数：%d\n",ans);

	return 0;
}