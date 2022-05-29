#include<stdio.h>
#include<conio.h>
int main(){
	int *p,a[]={23,76,56,88,99};
	for(int i=0;i<5;i++){
	printf("the adress of value %d is %d\n ",*(a+i),(a+i));
}
	getch();
}