#include<stdio.h>
int anim(){
		char s;
	scanf("%c",&s);
	switch(s){
		case 'm':
			printf("monkey\n");
		    break;
		case 's':
			printf("snake\n");
			break;
		case 't':
			printf("tiger\n");
			break;
		case'l':
			printf("lion\n");
			break;
		case'p':
			printf("panda\n");
			break;
		default:
	printf("human biengs\n");
	}
	getch();
	return 0;
}
int plan(){
	char ch;
	scanf("%c",&ch);
	switch(ch){
		case'm':
			printf("money plant\n");
			break;
		case'n':
			printf("neem\n");
			break;
		case'a':
			printf("ashoka\n");
			break;
		case'g':
			printf("gawaarpaatha\n");
			break;
			default:
			printf("jadi booty\n");
	}
}
int main(){
	char m;
	printf("choose animal or plants\na-animals\np-plants\n");
	scanf("%c",&m);
	switch(m){
		case 'a':
			anim();
			break;
		case 'p':
			plan();
			break;
		default:
			printf("dekh ke choos kar\n");
			
	}
	getch();
return 0;
	
}
