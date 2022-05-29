#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	printf("ener three values\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c){
	printf("%d is bigger than %d and %d\n",a,b,c);
	}
	if(a<b&&b>c){
	printf("%d is bigger than %d and %d\n",b,a,c);
	}
	if(c>b&&a<c){
	printf("%d is bigger than %d and %d\n",c,a,b);
	}
	getch();
	return 0;
	
}