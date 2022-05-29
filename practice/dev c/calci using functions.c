#include<stdio.h>
add(int a,int b){
		printf("%d + %d = %d\n",a,b,a+b);
}
sub(int a,int b){
	printf("%d - %d = %d\n",a,b,a-b);
}
mul(int a,int b){
printf("%d * %d = %d\n",a,b,a*b);
}
div(int a,int b){
printf("%d/%d = %d\n",a,b,a/b);
}
int main(){
int f;
	int num1,num2;
	printf("enter any two number\n");
	scanf("%d%d",&num1,&num2);
	printf("choose the operation\n1- addtion\n2-substraction\n3- multiplication\n4- division\n");
	scanf("%d",&f);
	switch(f){
		case 1:
			add(num1,num2);
			break;
		case 2:
			sub(num1,num2);
			break;
		case 3:
			mul(num1,num2);
			break;
		case 4:
			div(num1,num2);
			break;
		default:
			printf("dekh le pehle\n");
			
	}
	getch();
	return 0;
	
}
