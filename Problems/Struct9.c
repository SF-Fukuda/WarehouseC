#include<stdio.h>

typedef struct UserT
{
	int id;
	char name[20];
	int pin;
}UserT;

void signup(UserT* u){
	printf("＝＝＝＝＝登録＝＝＝＝＝\n");
	printf("id:");
	scanf("%d",&u -> id);
	printf("name:");
	scanf("%s",&u -> name);
	printf("pin:");
	scanf("%d",&u -> pin);
	printf("====================\n");

}

void fin(UserT u){
	printf("=====登録情報======\n");
	printf("id:%d\n", u.id);
	printf("name:%s\n", u.name);
	printf("pin:%d\n", u.pin);
	printf("=====Tahnk you!======\n");
}

int main(void){
	
	UserT user;
	signup(&user);
	fin(user);

	return 0;
}