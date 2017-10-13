#include<stdio.h>

int main(void){

	int num,i;
	int flg=1;

	do{
		printf("2以上の整数：");
		scanf("%d", &num);
	}while(num <= 1);

	for(i=2;i<num;i++){

		/*解答1行の場合*/
		flg = num % i;
		
		
		if(flg) printf("素数\n");
		else printf("合成数\n");
	}

	return 0;
}