#include <stdio.h>

int main(void){

	int num = 0;

	int num1 = 0;
	int ans = 0;
	int q = 10;
	int s = 1;
	int k = 1;

	printf("非負の数を入力：");
	scanf("%d",&num);

	//桁数を把握
	for(int i = 0;i<=100;i++){
		num1 = num / q;
		q = q * 10;
		if(num1 <= 0){
			break;
		}
		k++;
	}

	printf("%d\n", k);
	for(int j = 0;j<=k;j++){
		for(int m = k - 1;m >= 0;m--){
			s = s * 10;
		}

		num1 = num / s;
		ans = ans + num1 * s;

	}	

		printf("%d\n", ans);

	return 0;
}