#include <stdio.h>
int sum_array(int* x,int n){
	int sum = 0;
	for(int i = 0;i < n;i++){
		sum = sum + *(x+i);
	}

	return sum;
}


int main(void){
	
	int x[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("sum:%d\n",sum_array(x,10));

	return 0;
}