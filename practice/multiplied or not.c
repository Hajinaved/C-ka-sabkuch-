#include<stdio.h>
#include<conio.h>
int main(){
int a,b;
printf("enter two number to check whter they are multiplied or not\n");
scanf("%d%d",&a,&b);
if(b%a==0){
	printf("it is multiplied\n");

}
else {
	printf("it is not multiplied\n");
}
getch();
return 0;
}