#include<stdio.h>
#include<conio.h>
int main(){
int a;
printf("enter any number between 1-12\n");
scanf("%d",&a);
if(a<0){
printf("input is less than 0\n");
}
else if(a==1){
printf("january\n");
}

else if(a==2){
printf("feburary\n");
}

else if(a==3){
printf("march\n");
}

else if(a==4){
printf("april\n");
}

else if(a==5){
printf("may\n");
}

else if(a==6){
printf("june\n");
}

else if(a==7){
printf("july\n");
}

else if(a==8){
printf("august\n");
}

else if(a==9){
printf("september\n");
}

else if(a==10){
printf("october\n");
}

else if(a==11){
printf("november\n");
}

else if(a==12){
printf("december\n");
}

else if(a>12){
printf("greater input than 12\n");
}
getch();
return 0;
	
}