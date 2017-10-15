#include<stdio.h>

int main(void){
	
	int num,i;

	do{
		printf("2以上\n");
		scanf("%d", &num);
	}while(num <= 1);

	for(i=2;i<num;i++)
		if(/*解答*/!(num % i))break;

	printf("最小素因数：%d\n",i);

	return 0;
}