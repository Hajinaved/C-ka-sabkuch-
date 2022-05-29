#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	FILE *p;
	char ch;
	p=fopen("C:\\Users\\ARBAB\\Documents\\code blocks\\files handing\\reading a string using fgetc\\FILE.txt","r");
	    if(p==NULL){
    	printf("file not found\n");
    	exit(1);
    }
    ch=fgetc(p);
    while(!feof(p))
    {
    	 printf("%c",ch);
    ch=fgetc(p);

    }
	fclose(p);
	getch();
	return 0;
}