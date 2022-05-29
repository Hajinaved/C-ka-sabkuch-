#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
char s[50],r[50];
printf("enter any string\n");
gets(s);
fflush(stdin);
r=strrev(s);
printf("%s \n\t is reverse of \n\t %s \n",r,s);
getch();
return 0;
}