#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	printf("enter any two number to be swapped\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d\nb=%d\n",a,b);
	getch();
	return 0;
}