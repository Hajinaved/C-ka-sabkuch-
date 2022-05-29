#include<stdio.h>
#include<conio.h>
int main(){
	int salary ,bonus;
	char g,emp[40];
	printf("enter gender (m/f)\n and enter salary\n");
	scanf("%c%d",&g,&salary);
	if(((g=='m'||g=='M'))&&salary<10000){
		bonus=7*salary/100;
	
	}
	else if(((g=='m'||g=='M'))&&salary>10000){
		bonus=5*salary/100;
		
	}
	else if(((g=='f'||g=='F'))&&salary<10000){
		bonus=12*salary/100;
		
	
	}
	else if(((g=='f'||g=='F'))&&salary>10000){
		bonus=10*salary/100;
	
	}
	if(g=='m'||g=='M'){
	printf("for male employee having salary %d bonus is %d\n",salary,bonus);
}
	if(g=='f'||g=='F'){
	printf("for female employee having salary %d bonus is %d\n",salary,bonus);
}
	getch();
	return 0;

}