#include<stdio.h>
#include<conio.h>
int main(){
	int arr[]={1,23,32,23,33,4};
	int i =0;
	while( i<6){
		printf("adress of %d in array is %d\n",arr[i],&arr[i]);

		i++;
	}
getch();
}