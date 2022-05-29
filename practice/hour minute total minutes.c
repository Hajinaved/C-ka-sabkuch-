#include <stdio.h>
#include<conio.h>
int main(){
	int h,m,tm;
	printf("enter hours and minutes\n");
	scanf("%d%d",&h,&m);
	tm=h*60+m;
	printf("total number of minutes are %d",tm);
	getch();
	return 0;
}