#include<stdio.h>
#include<conio.h>
int main(){
	int x,y;
	printf("enter the coordinates of point like    (x,y)\n");
	scanf("(%d,%d)",&x,&y);
	if(x<0&&y<0){
	printf("point is in 3rd quadrant\n");
	}
	else if(x>0&&y>0){
	printf("point is in 1st quadrant\n");
	}
	else if(x<0&&y>0){
	printf("point is in 2nd quadrant\n");
	}
	else if(x>0&&y<0){
	printf("point is in 4th quadrant\n");
	}
	getch();
	return 0;
}