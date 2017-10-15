#include<stdio.h>

int main(void){
	
	int exist = 0;
	int s,t;
	char str[100];

	printf("文字列：");
	scanf("%s",str);

	for(s=0;str[s];s++){
		for(t=s+1;str[t];t++){
			if(/*解答*/str[s] == str[t])exist=1;
		}
	}
	if(exist) printf("同じ文字が存在\n");
	else printf("全ての文字が異なる\n");

	return 0;
}