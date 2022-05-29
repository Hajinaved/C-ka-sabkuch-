#include<stdio.h>
#include<conio.h>
int diff(int a ,int b){
	if(a<b){
		return (b-a)*3;
	}
	else{
		return a-b;
	}
}
int main(){
	int x,y;
	printf("enter big number\n");
	scanf("%d",&y);
	printf("enter small number\n");
	scanf("%d",&x);
	printf("\n\n%d\n\n",diff(y,x));
	getch();
	return 0;
}