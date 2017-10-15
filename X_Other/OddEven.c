#include <stdio.h>

int main(void){

	//変数宣言
	int num[12] = {2,-8,5,-4,6,5,7,-3,-9,1,3,8};
	int odd = 0;
	int even = 0;
	int hunokazu = 0;

	//for文で配列の番地を変えながら比較
	for(int i = 0;i<12;i++){
		//奇数偶数判定処理
		if(num[i] % 2  == 0){
			odd++;
		}else{
			even++;
		}
		//負の数の処理
		if(num[i] < 0){
			hunokazu++;
		}
	}
	//表示
	printf("奇数：%d,偶数：%d,負の数：%d\n",odd,even,hunokazu);

	return 0;
}