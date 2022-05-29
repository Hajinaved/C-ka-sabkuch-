#include<stdio.h>
#include<conio.h>
int main(){
	int s=0,n;
	printf("enter  number\n");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		s+=i;
	}
	printf("sum of %d numbers is %d\n",n,s);
	getch();
	return 0;
}