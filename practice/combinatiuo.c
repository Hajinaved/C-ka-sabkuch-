#include<stdio.h>
#include<conio.h>
int main(){

for(int i=1;i<=100;i++){
for(int j=1;j<=100;j++){
	for(int k=1;k<=100;k++){
	for(int l=1;l<=100;l++){
	if((i+j+k==l)&&(i<j&&j<k&&k<l)){
	printf("%d %d %d %d\n",i,j,k,l);
	}
	
	
}
}
}
}
getch();
return 0;
}