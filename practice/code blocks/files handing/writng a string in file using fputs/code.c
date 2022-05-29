#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct car{
	int nos;
	char name[20];
	int price;
}car;
int main(){
	FILE *p;
	car c1;
	printf("enter the name of car\n");
	gets(c1.name);
	fflush(stdin);
	printf("enter the number of seats\n");
	scanf("%d",&c1.nos);
	printf("enter price\n");
	scanf("%d",&c1.price);
	fflush(stdin);
	p=fopen("C:\\Users\\ARBAB\\Documents\\code blocks\\files handing\\fwrite\\FILE.dat","w");
	if(p==NULL){
    			printf("file not found\n");
    			exit(1);
    			}
    fwrite(&c1,sizeof(c1),1,p);
    
	fclose(p);
	getch();
	return 0;
}