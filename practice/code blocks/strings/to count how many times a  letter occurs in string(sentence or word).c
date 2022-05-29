#include<stdio.h>
#include<conio.h>
int main(){
	char s[100],*p;
	char n;
	int count = 0;
	printf("enter the string\n");
	gets(s);
	printf("now enter the letter you want to know that occured how many times\n");
	scanf("%c",&n);
	p=s;
	while(*p!='\0'){
		if(*p==n){
			count ++;
		}
		p++;

	}
	printf("%c occured %d times in '%s'\n",n,count,s);
	getch();
	return 0;
}
