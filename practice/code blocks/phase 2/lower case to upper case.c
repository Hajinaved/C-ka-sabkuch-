#include<stdio.h>
#include<conio.h>
int main(){
	char str[25];
	int i=0;
	printf("enter any string\n");
	gets(str);
	while(*(str+i)!=10){
		if(*(str+i)>=65&&*(str+i)<=90){
			*(str+i)+=32;
		}
		i++;
	}
	getch();
	return 0;
}