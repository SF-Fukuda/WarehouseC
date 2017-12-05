#define NUM 3
#include<stdio.h>

typedef struct Score
{
	int eng;
	int math;
}Score;

void sortinmath(Score ptr[],int num){
	Score tmp;
	for(int i = 0;i < num;i++){
		for(int j = 1 + i;j < num;j++){
			if(ptr[i].math < ptr[j].math){
				tmp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j]= tmp;
			}
		}
	}
}

int main(void){

	Score members[NUM] = 
				{{60,60},{0,70},{70,0}};
	sortinmath(members, NUM);
	printf("%d,%d\n",members[0].eng,members[0].math);
	printf("%d,%d\n",members[1].eng,members[1].math);
	printf("%d,%d\n",members[2].eng,members[2].math);

	return 0;
}