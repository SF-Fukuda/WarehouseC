#include <stdio.h>

int prime[100] = {};
void primeAry();

int main(void){

	int range = 1;
	int oriPrime = 0;
	int address = 0;
	int flg;
	int primeSize = 0;
	float keta = 0.1;

	printf("----------素数判定----------\n");
	printf("2からどの数まで素数判定しますか？　＝＞　");
	scanf("%d",&range);

	for(int num = 1;num <= range;num++){
		for(int i = 1;i < num - 1;i++){
			flg = 0;
			if(num % (num - i) ==  0){
				flg++;
				break;
			}
		}
		if(flg == 0 && num != 1){
			//素数の桁数によってketaを変える。
			if(keta - num <= 0){
				//桁数が変わった場合、桁数が変わる前までの数を配列に格納
				printf("test\n");
				primeAry(oriPrime,keta,primeSize);
				keta *= 10;	
			}
			//2357のようにketa倍して入れる
			if(primeSize > 0){
				oriPrime = oriPrime * keta + num; 
			}else{
				oriPrime = num;
				primeSize ++;
			}	
		}
	}	
	for(int j = 1; j <= primeSize; j++){
		printf(" %d \n", prime[j - 1]);
	}

	return 0;
}
void primeAry(int primeI,int size,int sizePrime){
	int test = 0;
	for(int i = 1;i <= sizePrime;i++){
		test = primeI * (1 / size ^ (sizePrime - i));
		prime[i -1] = test;
		test = primeI - test * (size ^ (sizePrime - 1)) ;
	}
}