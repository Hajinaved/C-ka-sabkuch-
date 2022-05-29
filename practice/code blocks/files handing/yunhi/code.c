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
	p=fopen("C:\\Users\\ARBAB\\Documents\\code blocks\\files handing\\fwrite\\FILE.dat","rb");
	if(p==NULL){
    	printf("file not found\n");
    	exit(1);
    			}

    fread(&c1,sizeof(c1),1,p);
    printf("name is %s\n number of seats is %d\nprice is %d\n",c1.name,c1.nos,c1.price);
    fclose(p);
	getch();
	return 0;
}