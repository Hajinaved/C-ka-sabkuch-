#include<stdio.h>
#include<conio.h>

struct student{
	int rollno;
	char name[50];
	char course[70];
	char depart[100];
	int yoj;
};
int input(struct student b,int f){
	int j=1;
	printf("For student numbe %d enter data\n",j+f);
	printf("enter the name of student \n");
	gets(b.name);
	printf("enter roll no.\n");
	scanf("%d",&b.rollno);
	fflush(stdin);
	printf("enter department (civil,computer,mechanical ,electrical):-\n");
	gets(b.depart);
	fflush(stdin);
	printf("enter course\n");
	gets(b.course);
	fflush(stdin);
	printf("enter year of joining\n");
	scanf("%d",&b.yoj);
}
 int output(struct student b,int f){
 	int j=1;
 	printf("For student number %d\n",j+f);
 	printf("Name of student:- %s.\nRoll number:- %d\nDepartment:- %s\nCourse:- %s\nYear of joining :-%d\n",b.name,b.rollno,b.depart,b.course,b.yoj);
 }
int main(){
	int n;
	int i=0;
	struct student a[n];
	printf("enter number of students\n");
	scanf("%d",&n);
	printf("Now enter the data for respective students \n\n\n\n ");
	while(i<=n){
		input((a+i),i);
		i++;
	}
	printf("list of students data areas fallows\n");
	while(i<=n){
		output(a+i);
		i++;
	}
	getch();
	return 0;
}
