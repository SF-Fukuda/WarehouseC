#include<stdio.h>

int sum(int x,int y){

	return x + y;
}

int main(void){
	
	int a,b;

	printf("整数A:");
	scanf("%d",&a);
	printf("整数B:");
	scanf("%d",&b);

	printf("sum:%d\n",sum(a,b));

	return 0;
}