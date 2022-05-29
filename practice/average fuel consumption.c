#include<stdio.h>
#include<conio.h>
int main(){
	float d,l,av;
	printf("enter distance travelled by vehicle\n");
	scanf("%f",&d);
	printf("enter fual consumed\n");
	scanf("%f",&l);
	av=d/l;
	printf("Average fuel consumption of vehicle is %f\n",av);
	getch();
	return 0;
	
}