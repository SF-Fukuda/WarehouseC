#include<stdio.h>

int main(void){

	int num = 0;

	printf("範囲を入力してください。\n");
	scanf("%d",&num);

	for(int i = 1;i <= num; i++){
		if(i % 2 == 0){
			printf("> %d\n", i);
		}
	}

	return 0;
}