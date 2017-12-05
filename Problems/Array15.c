#include <stdio.h>

void make_mail (char* text,char* sign,char* mail){
	while(*mail = *text){
		*mail++ = *text++;
	}
	*mail++ = '\n';
	while(*mail = *sign){
		*mail++ = *sign++;
	}
}

int main(void){
	
	char tex[20];
	scanf("%s",tex);
	char sig[10];
	scanf ("%s",sig);
	char mai[31];

	make_mail(tex,sig,mai);
	printf("%s\n", mai);
	return 0;
}