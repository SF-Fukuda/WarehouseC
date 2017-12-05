#include <stdio.h>

void ary_copy(char* d,char* s,int t){
	for(int i = 0; i <= t - 1;i++){
		*s++ = *d++;
	}
}

int main(void){
	char array1[10] = {'a','b','c',
					'd','e','g','h','i','j','k'};
	char array2[10];
	int num = 0;

	printf("10以下の整数\n");
	scanf("%d",&num);
	ary_copy(array1,array2,num);
	printf("%s\n", array2);
	
}