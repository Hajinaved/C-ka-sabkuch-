#include<stdio.h>
#include<conio.h>

int main(){
	int a[10];
	printf("enter 10 elements of array\n");
	for(int i=0;i<=9;i++){
		scanf("%d",&a[i]);
	}
	//int d1[9];
	printf("elements of D1 are\n");
	for(int i=0;i<=8;i++){
	//	d1[i]=a[i+1]-a[i];
	printf("%d\n",a[i+1]-a[i]);
	}
	//int d2[8];
	printf("elements of D2 are\n");
	for(int i=0;i<=7;i++){
		//d2[i]=d1[i+1]-d1[i];
		printf("%d\n",d1[i+1]-d1[i]);
	}
	//int d3[7];
	printf("elements of D3 are\n");
	for(int i=0;i<=6;i++){
		//d3[i]=d2[i+1]-d2[i];
		printf("%d\n",d2[i+1]-d2[i]);
	}
	getch();
	return 0;	
}