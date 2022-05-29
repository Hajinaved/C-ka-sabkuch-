#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char st[50],*p;
	int i=1;
	printf("enter any sentence\n");
	gets(st);
	p=st;
	while(*p!='\0'){
		if(*p==' '){
			i++;
		}
		p++;
	}
	printf("number of words in \n %s \n is %d",st,i);
	getch();
	return 0;
}