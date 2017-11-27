#include <stdio.h>

int main(void){
	
	int array[5];int i;
	int* ptr=array;

	for(int i = 0;i < 5;i++){
		scanf("%d",&(*(ptr+i)));
	}
	for(int i = 0; i < 5;i++){
		printf("%d\n",*(array+i));
	}

	return 0;
}