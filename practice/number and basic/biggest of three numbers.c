#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	printf("enter any three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c){
		printf("%d is the biggest\n",a);
	}
	else if(b>c&&b>a){
		printf("%d is biggest\n",b);
	}
	else if(c>a&&c>b){
		printf("%d is biggest\n",c);
	}
	getch();
	return 0;
}