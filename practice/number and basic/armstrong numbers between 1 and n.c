#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
	int n,m,t1,t2,s=0;
	printf("enter any number till which you want armstrong numbers\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		t1=i;
		t2=i;
		while(t2>0){
			s=s+((t2%10)*(t2%10)*(t2%10));
			t2=t2/10;
		}
		if(t1==s){
			printf("%d\n",s);
		}
	}
	getch();
	return 0;
}