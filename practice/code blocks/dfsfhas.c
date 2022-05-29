#include<stdio.h>
#include<conio.h>

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
float div(float a,float b){//printf("%d/%d = %d\n",a,b,a/b);u
    return a/b;}

float average(float a,float b,float c)
{
return (a+b+c)/3; }


int main(){
char op;
int num1, num2,r1;
float num3,num4,num5,r2;
printf("now choose the operation:-(+,-,/,*,%)\na - average\n");
scanf("%c\n",&op);

switch(op){
case'+':
    printf("enter the values\n");
    scanf("%d%d",&num1,&num2);
    r1=add(num1,num2);
    printf("%d\n",r1);
    break;
case'-':
    printf("enter the values\n");
    scanf("%d%d",&num1,&num2);
    r1=sub(num1,num2);
    printf("%d\n",r1);
    break;
case'*':
    printf("enter the values\n");
    scanf("%d%d",&num1,&num2);
    r1=mul(num1,num2);
    printf("%d\n",r1);
    break;
case'/':
    printf("enter the values\n");
    scanf("%f%f",&num3,&num4);
    r2=div(num3,num4);
    printf("%f\n",r2);
    break;
    case'a':
    printf("enter the values\n");
    scanf("%f%f%f",&num3,&num4,&num5);
    r2=average(num3,num4,num5);
    printf("%f\n",r2);
    break;
default:
    printf("gadde dekh ke kar \n");
    break;}
    getch();






}
