#include<stdio.h>
int add(int a,int b){
		//prfloatf("%d + %d = %d\n",a,b,a+b);
		return a+b;
}
int sub(int a,int b){
	//prfloatf("%d - %d = %d\n",a,b,a-b);
	return a-b;
}
int mul(int a,int b){
    return a*b;
//printf("%d * %d = %d\n",a,b,a*b);
}
float div(int a,int b){
    return a/b;
//printf("%d/%d = %d\n",a,b,a/b);u
}
int main(){

char f;
int su;
	int num1,num2;
	printf("enter any two number\n");
	scanf("%d%d",&num1,&num2);
	printf("choose the operation\na- addtion\ns-substraction\nm- multiplication\nd- division\n");
	scanf("%c",&f);
	switch('f'){
		case 'a':
			su=add(num1,num2);
			break;
		case 's':
			su=sub(num1,num2);
			break;
		case 'm':
			su=mul(num1,num2);
			break;
		case 'd':
			su=div(num1,num2);
			break;
		default:
			printf("dekh le pehle\n");

	}
	printf("%d\n",su);
	getch();
	return 0;

}
