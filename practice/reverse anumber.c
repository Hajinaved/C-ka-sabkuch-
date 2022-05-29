#include<stdio.h>
#include<conio.h>
int main(){
	int num,rev=0,m;
printf("enter any number\n");
scanf("%d",&num);
while(num>0){
	m=num%10;
	rev=rev*10+m;
	num=num/10;
}
printf("reversed number is %d\n",rev);
getch();
return 0;

}