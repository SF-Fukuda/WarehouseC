#include <stdio.h>

typedef struct Score
{
	int eng;
	int math
}Score;

int main(void){

	Score taro;
	Score* ptr=&taro;
	(*ptr).eng = 60;
	(*ptr).math = 90;

	printf("%d\n", taro.eng);
	printf("%d\n", taro.math);

	return 0;
}