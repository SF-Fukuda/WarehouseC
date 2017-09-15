#include <stdio.h>

int main(void){

	char ch = 0;

	printf(">1文字を入力してください：");
	scanf("%s",&ch);

	printf("%sの文字コードは%sです。",ch,ch);

	return; 
}