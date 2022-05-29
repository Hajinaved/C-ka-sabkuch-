#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
	int n,s;
	printf("enter the size of suare\n");
	scanf("%d",&s);
	for(int i=0;i<s;i++){
		if(i==0||(i==s-1)){
		for(int j=0;j<s;j++){
			printf("#");
		}
		printf("\n");
		}
		else{
			printf("#");
			for(int k=1;k<s-1;k++){
				printf(" ");
			}
			printf("#");
			printf("\n");
		}
	}
	getch();

	return 0;
}