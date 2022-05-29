#include<stdio.h>
#include<conio.h>
int main(){
	int n,r=0,m;
	printf("enter any number\n");
	scanf("%d",&n);
	m=n;
	while(n>0){
		r=r*10+n%10;
		n=n/10;
	} 
	if(r==m){
		printf("%d is palindrome number\n",m);
	}
	else{
		printf("%d is not a palindrome number\n",m);
	}
	getch();
	return 0;
}