#include<stdio.h>

int main(void){

	int i;
	char str1[100];

	printf("文字列を入力\n");
	scanf("%s",str1);

	for(i=0;/*解答*/str1[i];i++);

	for(i--;i>=0;i--){
		printf("%c", str1[i]);
	}

	return 0;
}