#include <stdio.h>

int main(void){

	int range = 1;
	int prime[] = {2};
	int address = 0;
	int flg = 0;
	int primeSize = 0;

	printf("----------素数判定----------\n");
	printf("2からどの数まで素数判定しますか？　＝＞　");
	scanf("%d",&range);

	for(int num = 2;num<=range;num++){
		printf("%d\n",num );
		primeSize = sizeof prime / sizeof prime[0];
		flg = 0;
		for(int j = 1;j <= primeSize;j++){
			if(num % prime[j - 1] == 0 && num != 2){
				flg ++;
				break;
			}
		}
		printf("flg:%d\n",flg );
		if(flg == 0){
			prime[address] = num;
			address ++;
		}	
	}
	primeSize = sizeof prime / sizeof prime[0];
	printf("--------------素数--------------\n");
	for(int k = 0;k <= primeSize;k++){
		printf(" %d ",prime[k]);
		if(k % 10 == 0) printf("\n");
	}

	return 0;
}