#include<stdio.h>
#include<conio.h>
int main(){
	int x,y,r;
	int p=0;
	printf("enter the radius of circle\n");
	scanf("%d",&r);
	for(x=0;x<=r;x++){
	for(y=1;y<=r;y++){
	if((x*x)+(y*y)<=(r*r)){
		p++;
	}
	}
	}
	printf("points in circles is %d\n",p*4+1);
	getch();
	return 0;
}