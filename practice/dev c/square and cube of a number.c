#include<stdio.h>
int main(){
	int a,s,c;
	printf("enter any number to find its square and cube\n");
	scanf ("%d",&a);
	s=a*a;
	c=s*a;
	printf("the square and cube of number %d are %d and %d respectively\n",a,s,c);
	return 0;
}
