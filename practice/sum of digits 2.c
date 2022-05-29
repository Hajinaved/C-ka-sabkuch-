#include<stdio.h>
#include<conio.h>
int count(int n); 
int main(){
	int num,sum=0,i=0,f=0;
	printf("enter any number\n");
	scanf("%d",&num);
 while(f<=count(num)+1){
 	i=num%10;
    sum=sum+i;
    num=num/10;
    f++;
       }
    printf("sum of all digits is %d",sum);
getch();
return 0;}
    

int count(int n){
	int count=0;
while(n!=0){
	n=n/10;
	count++;
	}
	return count;
}