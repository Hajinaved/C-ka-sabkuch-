#include<stdio.h>
#include<conio.h>
int main(){
	int n,sum=0;
	printf("enter any number\n");
	scanf("%d",&n);
	while(n>0){
		sum=sum+n%10;
		n=n/10;
	}
	printf("%d",sum);
	getch();
	return 0;
}