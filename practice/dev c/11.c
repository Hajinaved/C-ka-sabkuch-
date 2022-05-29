#include<stdio.h>
#include<conio.h>
int main(){
	char e;
	int u,l;
	printf("To get the series of prime numbers between a limit:- (y/n)?\nYes for continue \nNo to exit\n");
	scanf("%c",&e);
	if(e=='y'){
	
	printf("Enter the upper limit and the lower limit respectively:-\n");
	scanf("%d%d",&u,&l);
		printf("The series for prime numbers between %d and %d is:-\n",l,u);
	for(int i=l;i<=u&&(i%2!=0&&i%3!=0);i++)
	{
		printf("%d\n",i);
	
	}
		printf(" NOW GET LOST\n");
}
else{printf("THEN GET LOST\n");}
getch();
}
