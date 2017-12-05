#include <stdio.h>

typedef struct  Rat_int{
	int odd;
	int power;
}Rat_int;

int fct_int(Rat_int* x,int n){
	int i = 0;
	printf("%d\n", n);
	for(i = 0;i <= n; i++){
		if(n % 2) break;
		n = n/2;
		
	}
	(*x).odd = i;
	(*x).power = n;
}


int main(void){
	
	Rat_int num1;
	int num = 56;

	fct_int(&num1,num);
	printf("%d,%d\n", num1.odd,num1.power);

	return 0;
}