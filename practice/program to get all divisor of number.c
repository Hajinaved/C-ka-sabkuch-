#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("enter any number to get all of its divisor\n");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
	if(n%i==0){
	printf("%d \n",i);
	}
	}
	getch();
	return 0;
}