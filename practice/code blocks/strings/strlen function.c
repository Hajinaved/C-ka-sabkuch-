#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str[20];
int a;
printf("enter your first name\n");
gets(str);//here we form str[]="name"
 a=xstrlen(str);
printf("%s have %d characters and last character is null character\n",str,a);


getch();
return 0;
}
int xstrlen(char *i){
    int n=0;
while(*i!='\0')
    {
        i++;
        n++;
    }
    return n+1;
 }
