#include <stdio.h>

int main(void){

	int i;
	char str1[10];
	char str2[10];

	printf("文字を入力してください（10文字以内）\n");
	scanf("%s",str1);

	for(i = 0;str1[i];i++){
		str2[i] = str1[i];
	}

	str2[i] = '\0';

	printf("%s\n", str2);

	return 0;
}