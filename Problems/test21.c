#include <stdio.h>

void oddpart(int* ptr){

	for(int i = 0;*ptr % 2 == 0;i++){
		*ptr = *ptr / 2;
		printf("%d\n", *ptr);
	}

}

int main(void){

	int p = 56;
	oddpart(&p);

	return 0;
}