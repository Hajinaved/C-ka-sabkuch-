#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("enter any number to check whether the number is even or odd\n");
	scanf("%d",&n);
	if(n%2==0){
	printf("number is even\n");
	}
	else{
	printf("number is odd\n");
	}
	getch();
	return 0;
}