#include<stdio.h>
int main(){
	int x,y,z;
	printf("enter any three number\n");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y&&x>z){
		printf("%d is largest than %d and %d.\n ",x,y,z);
	}
	else if(y>x&&y>z){
			printf("%d is largest than %d and %d.\n ",y,x,z);
	}
	else if(z>x&&z>y){
			printf("%d is largest than %d and %d.\n ",z,y,x);
	}
}
