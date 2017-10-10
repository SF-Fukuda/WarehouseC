#include <stdio.h>

int main(void){

	for(int i = 0;i<=100;i++){
		printf("%d\n", i);
		//偶数奇数判定
		if(i % 2 == 0){
			printf("%dは偶数です\n", i);
		}else{
			printf("%dは奇数です\n", i);
		}
	}

}