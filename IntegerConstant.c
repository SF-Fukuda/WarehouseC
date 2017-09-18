#include <stdio.h>

int main(void){

	int inum = 2147483647;
	unsigned int uinum = 429467295;
	long int linum = -2147483647;
	unsigned long int ulinum= 429467295;

	printf("整数定数\n");
	printf("int：%d\n", inum);
	printf("unsignated int：%d\n", uinum);
	printf("long int：%d\n", linum);
	printf("unsignated int：%d\n", ulinum);

	return 0;
}