#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
	int h,w,a,p;
	printf("enter the hieght and wieght of rectangle\n");
	scanf("%d%d",&h,&w);
	a=h*w;
	p=2*(h+w);
	printf("area of rectangle is %d\n perimeter of rectangle is %d\n",a,p);
	getch();

	return 0;
}