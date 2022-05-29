#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,*p;
	printf("enter any two number \n");
	scanf("%d%d",&a,&b);
printf("value at a is %d\n value at b is%d\n",a,b);
p=&a+1;
*p=a;
a=b;
b=*p;
printf("intechanged value is a=%d\n\tb=%d\n",a,b);
getch();
return 0;
}