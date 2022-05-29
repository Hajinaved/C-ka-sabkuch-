#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	printf("enter two angles of triangle(a,b) \n");
	scanf("%d,%d",&a,&b);;
	c=180-a-b;
	printf("third angle is %d \n",c);
	getch();
	return 0;


}