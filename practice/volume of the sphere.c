#include<stdio.h>
#include<conio.h>

int main(){
	float r,v;
	printf("enter the radius of sphere\n");
	scanf("%f",&r);
	v=r*r*r*3.14*1.33;
	printf("%f is volume of sphere\n",v);
	getch();
	return 0;

}