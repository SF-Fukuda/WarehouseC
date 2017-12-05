#include <stdio.h>

typedef struct Score
{
	int eng;
	int math;
}Score;

void fct2(Score* ptr1,Score *ptr2){
	Score tmp;
	tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}

int main(void){
	
	Score taro = {60,90};
	Score jiro = {0,0};

	fct2(&taro,&jiro);


	printf("%d,%d\n", taro.eng,taro.math);
	printf("%d,%d\n", jiro.eng,jiro.math);

	return 0;
}