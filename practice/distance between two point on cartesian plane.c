#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int x1,y1,x2,y2,dis;
	printf("enter coordinate of point 1\n");
	scanf("%d%d",&x1,&y1);
	printf("enter coordinates of point 2\n");
	scanf("%d%d",&x2,&y2);
	dis=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("%d\n",dis);
	getch();
	return 0;



}