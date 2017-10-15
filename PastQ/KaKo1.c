#include <stdio.h>

int main(void){

	int num1,num2,tmp;

	do{
		printf("1個目の正の整数\n");
		scanf("%d",&num1);
	}while(num1 <= 0);

	do{
		printf("2個目の正の整数\n");
		scanf("%d",&num2);
	}while(num2 <= 0);

	while(num2){
		tmp = num2;

		/*解答*/
		num2 = num1 % num2;

		num1 = tmp;
	}

	printf("最大公約数は%d\n", num1);

	return 0;
}