#include <stdio.h>

typedef struct Score
{
	int eng;
	int math;
}Score;

void fct1(Score* ptr,int e,int m){
	(*ptr).eng = e;
	(*ptr).math = m;
}

int main(void){
	
	Score taro;
	fct1(&taro,60,90);

	printf("%d\n", taro.eng);
	printf("%d\n", taro.math);

	return 0;
}