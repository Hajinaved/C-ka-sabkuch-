#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int a1,a2,*ptr;
	printf ("enter the number of elements\n");
	scanf("%d\n",&a1);
	ptr=(int*) calloc(a1,sizeof(int));
	/*for(int i=0;i<a1;i++){
	scanf("%d",ptr+i);
	}*/
	printf("address of old elements\n");
	for(int i=0;i<a1;i++){
		printf("%u\n",ptr+i);
	};
	printf("enter the new number of elements\n");
	scanf("%d",&a2);
	/*for(int i=0;i<a2;i++){
		scanf("%d",ptr+i);
	}*/
	ptr=realloc(ptr,a2);
	printf("address of new elements are\n");
	for(int i =0;i<a2;i++){
		printf("%u\n",ptr+i);
	}
	free(ptr);
	getch();
	return 0;
}