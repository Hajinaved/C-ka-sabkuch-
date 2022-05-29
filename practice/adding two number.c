#include<stdio.h>
#include<conio.h>
int main(){
	int c,b;
	printf("enter any two numbers\n");
	scanf("%d%d",&c,&b);
	printf("sum is %d\n",c+b);
	fflush(stdin);
	getch();
	return 0;
}