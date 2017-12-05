#include <stdio.h>

void vector_add(double* ptr1,double* ptr2,double* ptr3,int n){

	for(int i = 0;i < n;i++){
		*(ptr3+i) = *(ptr1+i) + *(ptr2+i);
	}
}

int main(void){
	
	double x[5] = {1,2,3,4,5};
	double y[5] = {1.5,2.5,3.5,4.5,5.5};
	double z[5];
	vector_add(x,y,z,5);
	for(int i = 0;i < 5;i++){
		printf("%lf\n", *(z+i));
	}
	
	return 0;
}