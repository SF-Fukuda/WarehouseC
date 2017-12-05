#include <stdio.h>

void str_concat(char* d,char* s1, char* s2){
	while(*d = *s1){
		*d++ = *s1++;
	}
	while(*d = *s2){
		*d++ = *s2++;
	}
}

int main(void){
	
	char* str1 = "Hello,";
	char* str2 = "World!";
	char test[100];

	str_concat(test,str1,str2);

	printf("%s\n", test);


	return 0;
}