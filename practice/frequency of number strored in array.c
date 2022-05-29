#include<stdio.h>
#include<conio.h>
int main(){
	int f[10]={0};
	int a=0;
	printf("enter 10 positive number between 1-10");
	for(int i=0;i<=9;i++){
	scanf("%d",&a);
	switch(a){
	case 0:
	f[0]++;
	break;
	case 1:
	f[1]++;
	break;
	case 2:
	f[2]++;
	break;
	case 3:
	f[3]++;
	break;
	case 4:
	f[4]++;
	break;
	case 5 :
	f[5]++;
	break;
	case 6:
	f[6]++;
	break;
	case 7:
	f[7]++;
	break;
	case 8:
	f[8]++;
	break;
	case 9:
	f[9]++;
	break;
	default:
	printf("galat intered\n");
	break;}
	}
	for(int i=0;i<=9;i++){
	printf("%d is appeared %d times\n",i,f[i]);
	}
	getch();
	return 0;
}