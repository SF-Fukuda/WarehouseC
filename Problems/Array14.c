#include <stdio.h>

void sum_array(int* a,int* b,int* c,int n){
	for(int i = 0;i < n;i++){
		*(c+i) = *(a+i) + *(b+i);
	}
}

int main(void){

	int num = 5;
	int ary1[5] = {1,2,3,4,5};
	int ary2[5] = {6,7,8,9,10};
	int sum[5];
	sum_array(ary1,ary2,sum,num);
	for(int i = 0;i < num;i++){
		printf("%d\n", *(sum+i));
	}
	return 0;
}