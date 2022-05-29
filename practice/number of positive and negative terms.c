#include<stdio.h>
#include<conio.h>
int main(){
	int a[5],fp=0,fn=0;
	printf("enter any 5 numbers\n");
	for(int i=0;i<5;i++){
	scanf("%d",&a[i]);
	if(a[i]>0){
	fp++;
	}
	else if(a[i]<0){
	fn++;
	}
	}
	printf("total numbers of positive terms is %d and that of negetive terms is %d\n",fp,fn);
	getch();
	return 0;

}