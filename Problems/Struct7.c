#include <stdio.h>

typedef struct Person
{
	
	int age;
	int height;
	int weight;

}Person;

void pin(Person* person){
	int eage,eheight,eweight;
	printf("年齢：");
	scanf("%d",&eage);
	printf("身長：");
	scanf("%d",&eheight);
	printf("体重：");
	scanf("%d",&eweight);

	(*person).age = eage ;
	(*person).height = eheight;
	(*person).weight = eweight;

}

void pout(Person person){
	printf("%d\n", person.age);
	printf("%d\n", person.height);
	printf("%d\n", person.weight);

}

int main(void){
	Person taro;
	pin(&taro);
	pout(taro);


	return 0;
}