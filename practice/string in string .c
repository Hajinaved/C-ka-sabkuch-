#include<stdio.h>
#include<conio.h>
int xstrstr(char *p1,char *p2);
int main(){
	char s1[50];
	char s2[50];
	printf("enter any string \n");
	fflush(stdin);
	gets(s1);
	printf("enter search string\n");
	fflush(stdin);
	gets(s2);
	xstrstr(s1,s2);
	getch();
	return 0;
}
int xstrstr(char *p1,char *p2){
int i=1;
	while(*p1!='\0'){
	while(*p2!='\0'){
	if(*p2==*p1){
	p2++;
	}
	}
	i++;}
	if(*p2=='\0'){
	printf("%d\n",i);
	}
	else printf("0");
}