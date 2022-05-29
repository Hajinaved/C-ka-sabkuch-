#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int n,su=0,d;
    printf("enter any number\n");
    scanf("%d",&n);
   while(su!=1||su!=4){ 
   	while(n>0){
   		d=n%10;
    	su+=d*d;
    	n=n/10;
    }
    n=su;
  
    }
    if(su==1){
    	printf("number is happy number\n");
    }
    else if(su==4){
    	printf("number is not happy number\n");
    }

    getch();
	return 0;
}