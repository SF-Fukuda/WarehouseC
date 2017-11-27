#include <stdio.h>

void Inc(int* num){

	*num += 1;

}

int main(void){

	int a = 10;
	int rep = 10;

	for(int i = 1;i <= rep;i++){

		Inc(&a);
		printf("%d\n", a);

	}

	return 0;
}