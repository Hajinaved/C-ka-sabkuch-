#include<stdio.h>
#include<conio.h>
int rev(int x);
int main(){
int s,m,a;
printf("enter any number\n");
scanf("%d",&s);
m=rev(s);
while(m!=0){
	a=m%10;
switch (m){
case 1:
printf("one");
break;
case 2:
printf("two");
break;
case 3:
printf("three");
break;
case 4:
printf("four");
break;
case 5:
printf("five");
break;
case 6:
printf("six");
break;
case 7:
printf("seven");
break;
case 8:
printf("eight");
break;
case 9:
printf("nine");
break;
default:
break;
}
m=m/10;
}
getch();
return 0;
	
}
int rev(int x){
	int a;
	while(x!=0){
	a=a*10+x%10;
	x=x/10;
	}
	return a;
}