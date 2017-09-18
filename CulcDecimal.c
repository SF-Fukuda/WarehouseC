#include <stdio.h>

int main(void){

	//少数を入力すると、少数部分だけを返す

	double num = 0;
	double decnum = 0;
	int inum = 0;

	//UI
	printf("少数を入力すると、少数部分だけを返す少数部分だけを返す\n");
	printf("少数を含む値を入力してください::");
	scanf("%lf",&num);

	//処理(double型をint型に代入し、整数部分を抽出)
	inum = num;
	decnum = num - inum;

	printf("%lfの少数部分::%lf\n",num,decnum );


	return 0;
}