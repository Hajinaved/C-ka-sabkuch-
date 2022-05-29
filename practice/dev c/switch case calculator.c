#include<stdio.h>
#include<conio.h>
int main(){
	char op;
	int a,b;
	printf("enter any two number and choose the operation\t(+,-,/,*):-\n");
	scanf("%d%d",&a,&b);
	scanf("%c",&op);
	switch (op){
	case '+':
	printf("%d + %d = %d\n",a,b,a+b);
	break;
	case '-':
	printf("%d - %d = %.lf\n",a,b,a-b);
	break;
	case '/':
	printf("%d / %d = %d\n",a,b,a/b);
	break;
	case '*':
	printf("%d * %d = %d\n",a,b,a*b);
	default:
	printf("abe chutiye dekh ke choose kar\n");
	break;
}
return 0;
}
