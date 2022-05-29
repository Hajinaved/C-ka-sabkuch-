#include<stdio.h>
#include<conio.h>
int main(){
int n,m;
	int p;
	printf("enter any number\n" );
	scanf("%d",&n);
	m=n/2;
	while(m!=n){
		if((m%2!=0)&&(m%3!=0))
		{
			p=m;
			break;
		}
		m++;
	}
	printf("%d is sum of %d and %d\n",n,p,n-p);
	printf("bsdk question mein likha tha ke can be expressed or not bas to answer hai\n");
	if(((n-p)%2!=0)&&((n-p)%3!=0)){
		printf("yes it can be expressed \n");
		printf("%d is sum of %d and %d\n",n,p,n-p);
	}
	else {printf("no it cant be\n kyunki isme %d aa raha hai jo prime nahi hai\n",n-p);};

	getch();
	return 0;
}