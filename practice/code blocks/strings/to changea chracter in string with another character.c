#include<stdio.h>
#include<conio.h>
int main(){
	char str[100],ch,rp;
	int i=0;
	printf("enter any sentnce\n");
	gets(str);
	printf("choose letter and replacing letter\n");
	scanf("%c",&ch);
	fflush(stdin);
	scanf("%c",&rp);
	while(str[i]!='\0'){
		if(str[i]==ch){
			str[i]=rp;
		}
		i++;
	}
	printf("%c is replaced by %c in '%s'\n",ch,rp,str);
	getch();
	return 0;
      
}