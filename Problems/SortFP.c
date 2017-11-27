#include <stdio.h>

int sort3(int* n1,int* n2,int* n3){
	int sort[3] = {*n1,*n2,*n3};
	int tmp = 0;
	for(int i = 0;i < 3;i++){
		for(int j = i + 1;j < 3;j++){
			if(sort[j] < sort[i]){
				tmp = sort[i];
				sort[i] = sort[j];
				sort[j] = tmp;  
			}
		}
	}

	printf("%d,%d,%d\n", sort[0],sort[1],sort[2]);

	return 0;
}

int main(void){
	int a = 3;
	int b = 10;
	int c = 2;
	sort3(&a,&b,&c);

	return 0;
}