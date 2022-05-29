#include<stdio.h>
#include<conio.h>
int main(){
	int ul=0,ll=0,sum=0;
	printf("enter upper limit and lower limit\n");
	scanf("%d%d",&ul,&ll);
	for(int i=ll;i<=ul;i++){
	if(i/17!=0){
	sum+=i;
	}

	}
	printf("sum is %d",sum);
	getch();
	return 0;
}