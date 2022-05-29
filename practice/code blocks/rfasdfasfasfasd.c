#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int main(){
int *ptr,n, sum=0;
printf("enter the number of elements in array\n");
scanf("%d",&n);


ptr = (int*) malloc(n*sizeof(int));
for (int i =0;i<n;i++){
	printf("address of element %d is %u\n",(i+1),(ptr+i));
	sum+=*(ptr+i);
}
free(ptr);
printf("sum is %d\n",sum);

getch();


return 0;
}