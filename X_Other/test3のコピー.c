#include <stdio.h>

int main(void){

	int x,y,z;
	int* px=&x;int* py = &y;int* pz=&z;

	*px = 10;
	*py =11;

	*pz = *px + *py;

	printf("%d\n",z);

	return 0;
}