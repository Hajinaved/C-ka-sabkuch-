#include<stdio.h>
#include<conio.h>
struct cafe{
	int a;
	char b;
	double c;
};
int main(){
	struct cafe m;
	printf("%d\n",sizeof(m));
	getch();
	return 0;
}