#include<stdio.h>
#include<conio.h>
int main(){
	int nd,m,w,d;
	printf("enter number of days\n");
	scanf("%d",&nd);
	m=nd/30;
	w=(nd%30)/7;
	d=nd-m*30-7*w;
	printf("%d months \n%d weeks\n%d days\n",m,w,d);
	getch();
	return 0;
}