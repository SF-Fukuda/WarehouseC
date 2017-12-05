#include <stdio.h>

typedef struct Score
{
	int eng;
	int math;
}Score;

int main(void){
	
	Score taro = {60,90};
	Score jiro = {0,0};
	Score tmp;

	Score* tptr = &taro;
	Score* jptr= &jiro;

	tmp = *tptr;
	*tptr = *jptr;
	*jptr = tmp;


	printf("%d,%d\n", taro.eng,taro.math);
	printf("%d,%d\n", jiro.eng,jiro.math);

	return 0;
}