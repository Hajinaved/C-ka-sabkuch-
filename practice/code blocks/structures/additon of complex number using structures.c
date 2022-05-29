#include<stdio.h>
#include<conio.h>
typedef struct complex{
  int real,imagine;
}comp;
int main(){
comp n1,n2,s;

printf("enter the numbers in form\n real part of number 1  then enter\nimaginary part of number 1then enter\nreal part of number2 then enter\nimaginary part of number2 then enter\n)");
scanf("%d\n%d\n%d\n%d",&n1.real,&n1.imagine,&n2.real,&n2.imagine);
s.real=n1.real+n2.real;
s.imagine=n1.imagine+n2.imagine;
printf("%d+(%d)i+%d+(%d)i=%d+(%d)i\n",n1.real,n1.imagine,n2.real,n2.imagine,s.real,s.imagine);
getch();
return 0;
}