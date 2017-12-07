#include <stdio.h>

int main(void){
	
	int x = 10, y = 12;
	int* ptr;

	ptr = &x;

	(*ptr)++;

	ptr = &y;

	(*ptr)--;

	int a = 10,b = 12;
	a++;
	b--;

	printf("a:%d,b:%d\n",a ,b);
	printf("x:%d,y:%d\n",x,y);

	return 0;
}