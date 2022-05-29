#include<stdio.h>
#include<conio.h>
 struct time{
	int s;
	int h;
	int m;

}t1,t2,d;
int main(){
 
    printf("enter time1 in form hour/minute/second\n");
    scanf("%d/%d/%d",&t1.h,&t1.m,&t1.s);
    printf("enter time 2 in form hour/minute/second\n");
    scanf("%d/%d/%d",&t2.h,&t2.m,&t2.s);
    if(t1.s>t2.s){
    	t2.m--;
    	t2.s+=60;
    }
    d.s=t2.s-t1.s;
    if(t1.m>t2.m){
    	t2.h--;
    	t2.m+=60;
    }
    d.m=t2.m-t1.m;
    d.h=t2.h-t1.h;
    printf("duration of time from %d/%d/%d to %d/%d/%d is %d/%d/%d\n",t1.h,t1.m,t1.s,t2.h,t2.m,t2.s,d.h,d.m,d.s);
    getch();
 
   return 0;
}



