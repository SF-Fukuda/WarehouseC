#include <stdio.h>

void com(int* a,int* b,int* c){

	if(*a < *b){
		*c = *a;
	}else{
		*c = *b;
	}

	printf("%d\n", *c);

}

int main(void){

	int a = 22;
	int b = 19;
	int c = 0;

	com(&a,&b,&c);

	return 0;
}