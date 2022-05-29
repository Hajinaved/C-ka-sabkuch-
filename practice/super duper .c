#include<stdio.h>
#include<conio.h>
int main(){
int ppm=500,sale=100,opco=10000,ad=1000;
int cp,np;
cp=ppm*sale;
printf("initialy\nsale is %d\nprofit is %d \n ad amount is %d\n",sale,cp,ad);
while(1){
ad*=2;
sale=sale*(120/100);
np=(sale*ppm);
if(np<cp){
	break;
}
np=cp;
}
printf("finally\n");
printf("sale is %d",sale);
printf("profit is %d",np);
printf("ad amount is %d",ad);
getch();
return 0;
}