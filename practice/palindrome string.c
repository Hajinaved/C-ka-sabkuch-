#include<stdio.h>
#include<conio.h>
#include<string.h>
int main (){
	static char *s[] = { 
"MalayalaM", 
"To really mess things up...", 
"One needs to know CH" 
"able was I ere I saw elba" 
};
char *p;
for(int i=0;i<4;i++){
	p=s[i];
	if(*p==*strrev(p)){
	printf("%s\n",p);
	}
	}
	getch();
	return 0;
}