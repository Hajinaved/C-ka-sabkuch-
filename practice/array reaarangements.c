#include<stdio.h>
#include<conio.h>
int main(){
	int n,s;
	printf("enter the number of elements \n");
	scanf("%d",&n);
	int ar[n];
	printf("enter elements of array\n");
	for(int i=0;i<n;i++){
	scanf("%d",&ar[i]);
	}
	
	for(int j=0;j<n;j++){
		
	for(int k=j+1;k<n;k++){
	if(ar[k]<ar[j]){
	s=ar[k];
	ar[k]=ar[j];
	ar[j]=s;
	}
	}
	}
	for(int l=0;l<n;l++){
	printf("%d\n",ar[l]);
	}
	getch();
	return 0;
}