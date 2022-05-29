#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int sl;
    char str[25];
printf("enter tyour name\n");
gets(str);
sl=strlen(str);

printf("the length of string %s is %d\n",str,sl);


getch();
return 0;
}
