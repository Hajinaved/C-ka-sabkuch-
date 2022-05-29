#include<stdio.h>
#include<conio.h>
int main(){
	int r,c,s=1;
	printf("enter the number of line to be printed\n");
	scanf("%d",&r);
	printf("enter the number of terms to be printed in line\n");
	scanf("%d",&c);
	for(int i=1;i<=r;i++){
	for(int j=0;j<c;j++){
	printf("%d\t",s+j);
	}
	printf("\n");
	s+=c;
	}
	getch();
	return 0;
}