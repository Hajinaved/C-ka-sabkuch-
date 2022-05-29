#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("enter any number\n");
	scanf("%d",&n);
	while(n!=0){
	printf("%d\t",n);
	n--;
	}
	getch();
	return 0;
}