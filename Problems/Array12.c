#include <stdio.h>

int* max_element(int* ptr,int n){
	printf("%p\n", &ptr[n - 1]);
	return &ptr[n - 1];
}

int main(void){
	
	int x[5]={1,2,3,4,5};
	int *ptr;
	ptr=max_element(x,5);
	printf("%d\n", *ptr);
	return 0;
}