#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("enter any number\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	printf("%d\t",i+1);
	}
	getch();
	return 0;

}