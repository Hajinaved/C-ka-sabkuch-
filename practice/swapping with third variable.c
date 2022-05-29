#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	printf("enter any two number to be swapped\n");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a=%d\nb=%d\n",a,b);
	getch();
	return 0;
	
}