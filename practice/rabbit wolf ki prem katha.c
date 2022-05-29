#include<stdio.h>
#include<conio.h>
float wleft(float w,float r);
float rleft(float w,float r);
int main(){

float d,w,r;
printf("enter the number of wolves and rabbits\n");
scanf("%d%d",&w,&r);
printf("enter the gap days of record\n");
scanf("%d",&d);
for(int i=0;i<1000;i++){
	if(i/d==0){
		printf("wolves are %d\nrabiits are %d in %d days",wleft(w,r),rleft(w,r),i);
	}
	w=wleft(w,r);
	r=rleft(w,r);
}
getch();
return 0;
	
}
float wleft(float w,float r){
	float wl;
	wl=(1-0.05*w)+(0.00001*0.01*r*w);
	return wl;
}
float rleft(float w,float r){
	float rl;
	rl=(1+0.01)*r-(0.00001*r*w);
	return rl;
}