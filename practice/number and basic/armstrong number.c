#include<stdio.h>
#include<conio.h>
int main(){
	int n,m,s=0;
	printf("enter any number to check whether it is armstrong number or not\n");
	scanf("%d",&n);
	m=n;
	while(n>0){
		s=s+((n%10)*(n%10)*(n%10));
		n=n/10;
	}
	if(s==m){
		printf("%d is armstrong number\n",m);
	}
	else{
		printf("%d is not armstrong number\n",m);
	}
	getch();
	return 0;

}