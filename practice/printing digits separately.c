#include<stdio.h>
#include<conio.h>
int main(){
	int n,m[20],i=0;
	printf("enter any number\n");
	scanf("%d",&n);
	while(n!=0){
	m[i]=n%10;
	n=n/10;
	i++;
	}
	for(int j=i;j>0;j--){
		printf("%d ",m[j]);
	}
	getch();
	return 0;
}