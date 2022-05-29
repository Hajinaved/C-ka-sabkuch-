#include<stdio.h>
#include<conio.h>
int main(){
    char c;
    char ch;
	FILE *t;
	t=fopen("q1.txt","w");
	fprintf(t,"We Love");
	fclose(t);
	t=fopen("q1.txt","r");
	c==fgetc(t);
	while(!feof(t)){
		printf("%c",c);
		c=fgetc(t);
	}
	fclose(t);
	t=fopen("q1.txt","a");
	fprintf(t,"Our Country");
	fclose(t);
	t=fopen("q1.txt","r");
	ch==fgetc(t);
	while(!feof(t)){
		printf("%c",ch);
		ch=fgetc(t);
	}
	fclose(t);
	getch();
	return 0;
}