#include <stdio.h>

int func(void){

	static int x = 1;
	x++;

	return x;
}


int main(void){

	int num = 0;

	for(int i = 0; i < 10;i++ ){
		num = func();
		printf("%d 回目：%d\n", i + 1,num);
	}

	return 0;
}