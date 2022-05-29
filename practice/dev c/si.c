#include<stdio.h>
int main(){
float p,r,t,si;

printf("Enter rate \n");
scanf("%f",r);
printf("Enter principle \n");
scanf("%f",p);
printf("Enter time \n");
scanf("%f",t);
si=p*r*t/100;
printf("%f is simple interest \nwhen rate is %f \nprinciple is %f\ntime is %f\n",si,r,p,t);
	getch();
	return 0;
} 
