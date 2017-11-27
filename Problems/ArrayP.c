#include <stdio.h>

int main(void){
	
	int array[5];int i;

	for(int i = 0;i < 5;i++){
		scanf("%d",&(*(array+i)));
	}

	for(int i = 0; i < 5; i ++){
		printf("%d\n",*(array+i));
	}

	return 0;
}