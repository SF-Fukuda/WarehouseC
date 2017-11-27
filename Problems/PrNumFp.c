#include <stdio.h>

void prnum(int* x){
		*x -= 1;
		printf("%d\n", *x);
}

int main(void){

	int z = 20;
	int y = z;
	printf("%d\n", z);

	for(int i = 0; i < y;i++){
		prnum(&z);
	}

	return 0;
}