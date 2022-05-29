#include<stdio.h>
#include<conio.h>
int main(){
	int n=1,s=0;
	printf("enter numbers untill u want (0 to terminate)\n");
     while(n!=0){
     scanf("%d",&n);
     if(n>s){
     s=n;
     }

     }
     printf("%d is the biggest\n",s);
     getch();
     return 0;
}