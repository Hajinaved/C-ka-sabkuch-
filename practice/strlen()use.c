#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	// int n;
	// printf("enter the size off string\n");
	// scanf("%d",&n);
	char s[50];
	printf("enter any string\n");
	fflush(stdin);
	gets(s);
	printf("length of strig is %d",strlen(s));
	getch();
	return 0;


}