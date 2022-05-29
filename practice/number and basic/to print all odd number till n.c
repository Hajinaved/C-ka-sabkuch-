#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("enter any number\n");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		if(i&1){
			printf("%d\n",i);
		}
	}
	getch();
	return 0;
	
}