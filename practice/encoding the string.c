#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char s[100];
	char *p;
	printf("enter any string to be encoded\n");
	fflush(stdin);
	gets(s);
	p=&s[0];
	while(*p!='\0'){
	*p+2;
	p++;
	}
	printf("%s",s);
	getch();
	return 0;

}