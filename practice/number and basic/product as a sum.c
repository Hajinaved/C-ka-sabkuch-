#include<stdio.h>
#include<conio.h>
int main(){
	int n,m,l;
	printf("enter any two numbers to be added\n");
	scanf("%d%d",&n,&m);
	l=n;
	n=0;
	for(int i=0;i<m;i++){
	n+=l;
	}
	printf("product of %d and %d is %d",l,m,n);
	getch();
	return 0;
}