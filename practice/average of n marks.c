#include<stdio.h>
#include<conio.h>
int main(){
	int m,s=0,n=-1,avg=0;
	printf("enter marks (0 to terminate)\n");
	while(m!=0){
	scanf("%d",&m);
	s+=m;
	n++;
	}
	avg=s/n;
	printf("%d is avg of %d students marks\n",avg,n);
	getch(); 
	return 0;
}