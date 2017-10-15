#include <stdio.h>

int main(void){

	char ch = 0;

	printf(">1文字を入力してください：");
	scanf("%c",&ch);

	//%cで文字そのものを表示、%Xで文字コードを表示
	printf(">%cの文字コードは0x%Xです。\n",ch,ch);

	return 0; 
}