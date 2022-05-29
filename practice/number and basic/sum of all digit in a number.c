#include<stdio.h>
#include<conio.h>
int main(){
	int n,m=0,s=0;
	printf("enter any number\n");
	scanf("%d",&n);
	m=n;
	while(n>0){
		s+=n%10;
		n=n/10;
	}
	printf("sum of all digits in %d is %d\n",m,s);
	getch();
	return 0;
}