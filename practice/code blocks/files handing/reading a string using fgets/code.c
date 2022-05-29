#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	FILE *p;
	char ch [50];
	p=fopen("C:\\Users\\ARBAB\\Documents\\code blocks\\files handing\\reading a string using fgets\\FILE.txt","r");
	    if(p==NULL){
    	printf("file not found\n");
    	exit(1);
    }
    while(fgets(ch,25,p)!=NULL){
    	printf("%s\n",ch);
    }
	fclose(p);
	getch();
	return 0;
}