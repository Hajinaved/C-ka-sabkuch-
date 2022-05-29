#include<stdio.h>
#include<conio.h>
int main()
{
	int h,m,tm;
	printf("enter total minutes\n");
	scanf("%d",&tm);
	if(tm>60){
		h=tm/60;
		m=tm%60;
	}
	else {
		m=tm;
	}
	printf("hours is %d\nminutes is %d",h,m);
	getch();
	return 0;
}