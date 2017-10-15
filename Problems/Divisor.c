#include<stdio.h>

int main(void){
	
	int num = 0;

	printf("約数を知りたい整数を入力->");
	scanf("%d",&num);

	printf("約数は：");
	for(int i = num;i > 0; i-- ){
		if(num % i == 0){
			printf("%d ,", i);
		}
	}
	printf("です。\n");

	return 0;
}