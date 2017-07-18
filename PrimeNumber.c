#include <stdio.h>

int main(void){

	int num = 0;
	int flg = 0;

	printf("1以上の整数を入力　＝＞");
	scanf("%d",&num);

	for(int i = 1;i < num - 1;i++){
		if(num % (num - i) == 0){
			flg++;
			break;
		}
	}
	if(flg == 0 && num != 1){
		printf("素数\n");
	}else{
		printf("素数ではない\n");
	}

	return 0;
}