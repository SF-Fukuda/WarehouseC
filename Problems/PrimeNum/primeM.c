#include <stdio.h>
#include "isPrime.h"

int main(void){
	
	int num,flg;
	do{
		printf("2以上整数を入力：");
		scanf("%d",&num);
	}while(num <= 1);

	flg = isPrime(num);

	if(flg){
		printf("%d ＜＝ 素数",num);
	}else{
		printf("%d ＜＝　合成数", num);
	}

	return 0;
}