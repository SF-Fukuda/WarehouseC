#include <stdio.h>

typedef struct User
{
	int id;
	int point;

}User;

void userW(User* u){
	printf("id:");
	scanf("%d",&u -> id);
	printf("point:");
	scanf("%d",&u -> point);
}

int main(void){

	 User taro;
	 userW(&taro);
	 printf("- id :%d", taro.id);
	 printf("- point :%d", taro.point);


	return 0;
}