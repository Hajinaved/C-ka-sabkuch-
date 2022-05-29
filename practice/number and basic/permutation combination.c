#include<stdio.h>
#include<conio.h>
int perm(int n,int r);
int com(int n,int r);
int fact(int n);
int main(){
	int n,r,p,c;
	printf("enter value of n and r\n");
	scanf("%d%d",&n,&r);
	p=perm(n,r);
	c=com(n,r);
	printf("permutation is %d\ncombination is %d\n",p,c);
	getch();
	return 0;

}
int com(int n,int r){
	int a,b;
	a=fact(n);
	b=fact(n)*fact(n-r);
	return a/b;
}
int perm(int n,int r){
	int a,b;
	a=fact(n);
	b=fact(n-r);
	return a/b;
}
int fact(int n){
	int f=1;
	while(n>=1){
		f=f*n;
		n--;
	}
}