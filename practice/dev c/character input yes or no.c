#include<stdio.h>
#include<conio.h>
int main(){
char ch;
printf("choose a character (y/n)? \n");
scanf("%c",&ch);
if (ch =='y'){
	printf("you have pressed YES\n");
}
else if (ch=='n')
{printf("you have pressed NO");
}
else
{
printf("choose wisely CHUTIYE\n");  
}
getch();
}
