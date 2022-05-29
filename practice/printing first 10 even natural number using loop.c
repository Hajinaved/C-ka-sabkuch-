#include<stdio.h>
#include<conio.h>
int main(){
	int n,m=0;
	printf("enter any number \n");
	scanf("%d",&n);
	while(m!=n){
		if(m%2==0){
			printf("%d \n",m);
		}
		m++;
	}
	getch();
	return 0;
}