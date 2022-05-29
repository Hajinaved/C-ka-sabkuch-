#include<stdio.h>
#include<conio.h>
int main(){
	int a,s=0;
	printf("enter the number of elements\n");
	scanf("%d",&a);
	int r[a];
	printf("enter elements\n");
	for(int i=0;i<a;i++){
		scanf("%d",r[i]);
	}
	for(int j=0;j<a;j++){
		for(int l=j+1;l<a;l++){
			if(r[j]>r[l]){
				r[j]=s;
				r[l]=r[j];
				s=r[l];
			}
		}		
	}
		for(int k=0;k<a;k++){
			printf("%d\n",r[k]);
	}
		getch();
		return 0;
	}
