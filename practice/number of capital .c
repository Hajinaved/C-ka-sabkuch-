#include<stdio.h>
#include<conio.h>
int main(){
int count =0;
char *p;
static char*str[] = { 
"AFRiendls...", 
"SomEOne Loving AtrUE...",  
"fOr insTance somEONE....", 
"exactlY likE yoU!!" 
};

for(int i=0;i<4;i++){
	p=str[i];
	while(*p!='\0'){
	if((*p<=90)&&(*p>=65)){
	count++;
	}
	p++;
	}
}
printf("%d\n",count);
getch();
return 0;
}