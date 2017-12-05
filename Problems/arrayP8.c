#include <stdio.h>
int nibai (int x){
	x *= 2;
	return x;
}
int sanbai(int x){
	x *= 3;
	return x;
}

int main(void){
	int vnum = 0;
	int num = 0;

	printf("関数の値");
	scanf("%d",&vnum);
	printf("整数のあたい");
	scanf("%d", &num);

	int (*pt)(int num);
	if(vnum == 2){
		pt = nibai;
		printf("%d",pt(num));
	}else if(vnum == 3){
		pt = sanbai;
		printf("%d",pt(num));
	}
	

	return 0;
}