#include<stdio.h>
int main(){
	int number;
	printf("enter any number to check whether number prime or not\n");
	scanf("%d",&number);
if(number%2==0||number%3==0){
	printf("number is not prime\n");
}
else
{
printf("number is prime\n");
}
	}

