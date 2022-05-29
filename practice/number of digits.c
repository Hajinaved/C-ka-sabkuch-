#include<stdio.h>
#include<conio.h>
int count(int n);
int main(){
	int n;
	printf("enter any number of nay number of digits\n");
	scanf("%d",&n);
	
	printf("the total number of digits is %d\n",count(n));
	getch();
	return 0;
}
int count(int n){
	int count=0;
while(n!=0){
	n=n/10;
	count++;
	}
	return count;
}