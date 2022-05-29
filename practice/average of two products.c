#include<stdio.h>
#include<conio.h>
int main(){
	float w1,w2,nop1,nop2,av;
	printf("enter wieght and number of prchase for 1st product\n");
	scanf("%f%f",&w1,&nop1);
	printf("enter that for product 2\n");
	scanf("%f%f",&w2,&nop2);
	av=(nop1*w1+nop2*w2)/nop1+nop2;
	printf("average is %f\n",av);
	getch();
	return 0;
}