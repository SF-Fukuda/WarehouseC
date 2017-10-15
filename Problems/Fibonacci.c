#include <stdio.h>

int main(void){

	int fn = 1;
	int fn1 = 0;
	int fn2 = 0;

	//nが0と1の場合は例外的に処理(定義)
	printf(">0\n");
	printf(">1\n");

	//nが2以上の場合の処理
	for(int n = 2;n<= 100;n++){

			fn2 = fn1 + fn;

		if(fn2 <= 100){
			printf(">%d\n", fn2);
			fn = fn1;
			fn1 = fn2;
		}else{
			break;
		}

	}

	return 0;
}