#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("enter any number\n");
	scanf("%d",&n);
	for(int i=1;i<=100;i++){
	if(i%n==3){
	printf("%d\n",i);
	}

	}
	getch();
	return 0;
}