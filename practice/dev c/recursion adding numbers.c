#include<stdio.h>
int red(int a,int r){
	scanf("%d",&a);
	if(a!=0){

		red(a,r);
		 return	r=r+a;
	return	r=r+a;
	}
	else{
		return r;
	}
}
int main (){
int a,r;
printf("enter  number they will add up continuesly\n");
red(a,r);
return printf("objective completed\n");
}
