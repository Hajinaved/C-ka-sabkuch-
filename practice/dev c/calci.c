#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	char op;
	printf("enter any two numbers\n");
	scanf("%d%d",&a,&b);
	printf("now choose the operation:-(+,-,/,*,%)\n");
	scanf("%c\n",&op);
	switch(op){
		case '+':
			printf("%d + %d = %d\n",a,b,a+b);
			break;
	    case '-':
	    	printf("%d - %d = %d\n",a,b,a-b);
	    	break;
	    case '/':
	    	printf("%d / %d = %d\n",a,b,a/b);
	    	break ;
	    case '*':
	    	printf("%d * %d = %d\n",a,b,a*b);
	    	break;
	    case '%':
	    	printf("%d % %d = %d\n",a,b,a%b);
	    	break;
	    default:
	    	printf("abbey dekh to liya kar\n");
	    	break;
	}
	getch();
}
