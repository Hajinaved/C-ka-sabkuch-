#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("enter any number\n");
	scanf("%d",&n);
	if(n&1){
	printf("number is odd\n");
	}
	else {
	printf("number is even\n");
	}
	getch();
	return 0;
}