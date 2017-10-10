#include <stdio.h>
int main(void){
	//ユークリッドの互除法（FOR）
	int num1 = 0;
	int num2 = 0;
	int num = 0;
	int gcd = 0;

	printf("2つの整数ABの最大公約数を調べる\n");
	printf("A > Bで入力してください。\n");
	printf("整数A:");
	scanf("%d",&num1);
	printf("整数B:");
	scanf("%d",&num2);

	if(num1 > num2){
		/*何回必要かわからないので無限ループしないように
		  大きい数字から下げていく*/
		for(int i = num1; num1 >= 0; i--){
			num = num1 % num2;
			num1 = num2;
			num2 = num;
			//書き換えられる前にbreak
			if(num == 0){
				break;
			}else{
				gcd = num;
			}
		}
		printf("最大公約数は%dです\n", gcd);

	}else{
		printf("A > Bで入力してください。\n");
	}

	return 0;
}