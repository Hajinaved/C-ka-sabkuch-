#include<stdio.h>
#include<conio.h>
int main(){
	int n,ul,ll,s=0;
	printf("enter upper limit\nlower limt\n and the number whose sum of divisible number in the limit\n");
		scanf("%d%d%d",&ul,&ll,&n);
		for(int i=ll;i<=ul;i++){
			if(i%n==0){
				s+=i;
			}
		}
		printf("%d is sum of numbers in limit (%d,%d) which are divisible by %d\n",s,ll,ul,n);
		getch();
		return 0;

	}