#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("enter the year\n");
	scanf("%d",&n);
	if((n%4==0)){
		printf("year is leap year\n");
	}
	else if((n%400==0)){
		printf("year is leap year\n");
	}
	else if((n%100==0)){
		printf("year is leap year\n");
	}
	else {
		printf("not a leap year\n");
	}
	getch();
	return 0;

}