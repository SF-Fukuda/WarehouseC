#include<stdio.h>

double avrg(double x,double y,double z){
	double avg;

	avg = (x + y + z) / 3;

	return avg;
}

int main(void){

	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	printf("%lf\n", avrg(num1,num2,num3));

	return 0;
}