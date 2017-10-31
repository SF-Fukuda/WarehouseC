#include <stdio.h>

int main(void){
	
	int n;//,sum;
	int sum = 0;

	scanf("%d",&n);

	for(int i = 1;i < n;i++){
		if(!(n % i)) sum = sum + i;
	}

	printf("%d\n", sum);

	return 0;
}