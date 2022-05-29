#include<stdio.h>
#include<conio.h>
int test(int a,int b){
	if(a==b){
		return(a+b)*3;
	}
	else{
		return a+b;
	}
}
int main(){
int x;
int y;
printf("enter any two number\n");
scanf("%d%d",&x,&y);
printf("%d\n",test(x,y));
getch();
return 0;

}