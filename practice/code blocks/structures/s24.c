#include<stdio.h>
#include<conio.h>

struct insaan
{
	char name[30];
	char dob[20];
	int age;

};
int main(){
	struct insaan n;
	printf("enter name \n");
	gets(n.name);
	printf("enter age\n");
	scanf("%d",&n.age);
	printf("enter date of birth in format day/month/year\n");
	fflush(stdin);
    gets(n.dob);//scanf("%s",n.dob);//
	printf("name: %s\n age:  %d\n date of birth: %s\n ",n.name,n.age,n.dob);
	//printf("name  %s \n age %d\n",n.name,n.age);
/*	printf("name is %s \n date of birth is %s\n",n.name,n.dob);*/
	getch();
	return 0;
}