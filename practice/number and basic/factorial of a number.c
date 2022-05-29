#include<stdio.h>
#include<conio.h>
int main(){
	int n,f=1,m;
	printf("enter any number to find its factorial\n");
	scanf("%d",&n);
	m=n;
	while(n>=1){
		f=f*n;
		n--;
	}
	printf("%d is factorial of %d\n",f,m);
	getch();
	return 0;
	
}