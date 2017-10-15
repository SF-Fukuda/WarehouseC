#include <stdio.h>

int main(void){

	int day = 0;
	printf("日にちを入力してください：");
	scanf("%d",&day);

	//11月にある日にちかどうか
	if(day <= 30){
		//入力した日が何曜日であるか、7で割った時のあまりで評価する
		if(day % 7 == 0){
			printf("11月%d日は水曜日です。\n",day );
		}else if(day % 7 == 1){
			printf("11月%d日は木曜日です。\n",day );
		}
		else if(day % 7 == 2){
			printf("11月%d日は金曜日です。\n", day);
		}
		else if(day % 7 == 3){
			printf("11月%d日は土曜日です。\n", day);
		}
		else if(day % 7 == 4){
			printf("11月%d日は日曜日です。\n",day );
		}
		else if(day % 7 == 5){
			printf("11月%d日は月曜日です。\n",day );
		}else if(day % 7 == 6){
			printf("11月%d日は火曜日です。\n",day );
		}
	}else{
		printf("%d日は11月にはありません\n", day);
	}
	return 0;
}