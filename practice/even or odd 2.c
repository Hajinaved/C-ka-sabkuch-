#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("enter any number to check whether the number is even or odd\n");
	scanf("%d",&n);
	if(n&1/*it means that the first bit of n is 1 which is condition of odd number when written in binary*/){
	printf("%d is odd \n",n);
	}
	else {
	printf("%d is even\n",n);
	}
	getch();
	return 0;

}