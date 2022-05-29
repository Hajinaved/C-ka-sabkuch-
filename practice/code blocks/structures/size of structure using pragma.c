#include<stdio.h>
#include<conio.h>
/*#pragma pack(1)
*/ struct comp{
	int r,i;
	char a;
}c;
int main(){
	printf("enter any complex number in format real+imaginaryi\n");
	scanf("%d+i%d",&c.r,&c.i);
	printf("complex number is %d+i%d\n",c.r,c.i);
	printf("%d\n",sizeof(c));
	getch();
	return 0;
}
